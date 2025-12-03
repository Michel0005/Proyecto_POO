#include <iostream>
#include <string>
#include "automotor.cpp"
#include "trabajo.cpp"
#include "personal.cpp"
#include "mantenimiento.cpp"
#include "conductor.cpp"
#pragma once 
using namespace std; 

Automotor::Automotor(string m, string mod, int km_i):
marca(m), modelo(mod), kilometraje(km_i){}; 

void Automotor::registrarViaje(int km_recorridos){
    kilometraje += km_recorridos;
    cout << marca << "" << modelo << ":kilometraje actualizado a:"
    << kilometraje << "km" << endl; 
}

void Automotor::mostrarDetalles()const{
cout << "Automotor:" << marca << modelo 
<< "KM:" << kilometraje << "km."
<< "year" << year_fabricacion << endl;
}

void Automotor::registrarMantenimiento(string desc, string fecha){
    RegristoMantenimiento nuevoRegistro(kilometraje, desc, fecha);
    historial_mantenimiento.push_back(nuevoRegistro);
    cout << "[" << marca 
    <<" "<< modelo << "]Nuevo mantenimiento Registrado" << endl;
}

void Automotor::mostrarHistorialMantenimiento(){
    cout << "Historial de Mantenimiento ("<< marca 
    <<" " << modelo << ")" << endl;  
    if (historial_mantenimiento.empty()){
        cout << "No existe registro" << endl;
        return; 
    }
    for (const auto& registro : historial_mantenimiento){
        cout << registro.getDetalles() << endl; 
    }
    cout <<"--------------------------- "<< endl;   
}


VehiculoTrabajo::VehiculoTrabajo(string m, string mod, int km_i,
    float rend, bool hibrido): Automotor(m, mod, km_i),
    rendimiento_gasolina_km(rend),
    es_hibrido(hibrido){};

void VehiculoTrabajo::mostrarDetalles()const{
    cout << "Vehiculo de Trabajo" << endl;
    Automotor::mostrarDetalles();
    cout <<"rendimiento:" << rendimiento_gasolina_km << "km/L | hibrido"
    << (es_hibrido ? "Y": "N") << endl;
}

float VehiculoTrabajo::calcularCombustibleNecesario
(float distancia_km) const {
    return distancia_km / rendimiento_gasolina_km;
}

VehiculoPersonal::VehiculoPersonal(string m, string mod, int km_i, int hp):
Automotor(m, mod, km_i), potencia_hp(hp){};

void VehiculoPersonal::mostrarDetalles() const {
    cout << "Vehiculo Personal" << endl;
    Automotor::mostrarDetalles();
    cout << "potencia:" << potencia_hp << "HP" << endl;
}

void VehiculoPersonal::ActivarModoDeportivo() const {
    cout << marca << "" << modelo << "Personal" << endl;
}

Conductor::Conductor(int id, string nom):
id_empleado(id), nombre(nom), vehiculo_asignado(nullptr),
km_conducidos_total(0){};

void Conductor::asignarVehiculo(Automotor* vehiculo){
    vehiculo_asignado = vehiculo; 
    cout << "Vehiculo asignado a:" << nombre << "." << endl; 
}

void Conductor::registrarTrabajo(int km){
    if (vehiculo_asignado) {
        vehiculo_asignado->registrarViaje(km);
        km_conducidos_total += km;
        cout << "conductor" << nombre << "total" << km_conducidos_total <<
        "km" << endl;
    }
    else {
        cout << "El conductor no tiene vehiculo" << endl;
    }
}