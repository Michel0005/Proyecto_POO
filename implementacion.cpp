/** Este programa es donde se hace la implementacion de las clases
 * para la gestion integral de archivos vehiculares **/
 // Autor: Andre Michel Salgado Hidalgo | A01714887
 // Fecha:  7 de diciembre de 2025

#include <iostream>
#include <string>
#include "automotor.cpp"
#include "trabajo.cpp"
#include "personal.cpp"
#include "mantenimiento.cpp"
#include "conductor.cpp"
#pragma once 

using namespace std; 

/** Implementacion de los metodos de la clase Automotor **/
Automotor::Automotor(string m, string mod, int km_i):
marca(m), modelo(mod), kilometraje(km_i){}; 

/** registramos un viaje y actualizamos el kilometraje del vehiculo **/
/* km_recorridos Kilometros recorridos en el viaje */
/* No regresa valor */
void Automotor::registrarViaje(int km_recorridos)
{
    kilometraje += km_recorridos;

    cout << marca << "" << modelo << ":kilometraje actualizado a:"
        << kilometraje << "km" << endl; 
}

/** mostramos los detalles del vehiculo **/
/* no recibe parametros */
/* No regresa valor */
void Automotor::mostrarDetalles()const
{
    cout << "Automotor:" << marca << modelo 
        << "KM:" << kilometraje << "km."
        << "year" << yearFabricacion << endl;
}

/** registramos un mantenimiento en el historial del vehiculo **/
/* desc Descripcion del mantenimiento
   fecha Fecha del mantenimiento */
/* No regresa valor */

void Automotor::registrarMantenimiento(string desc, string fecha)
{
    RegistroMantenimiento nuevoRegistro(kilometraje, desc, fecha);
    historialMantenimiento.push_back(nuevoRegistro);

    cout << "[" << marca 
        <<" "<< modelo << "]Nuevo mantenimiento Registrado" << endl;
}

/** mostramos el historial de mantenimiento **/
/* no recibe parametros */
/* No regresa valor */

void Automotor::mostrarHistorialMantenimiento()
{
    cout << "Historial de Mantenimiento ("<< marca 
        <<" " << modelo << ")" << endl;  
    if (historialMantenimiento.empty()){
        cout << "No existe registro" << endl;
        return; 
    }
    for (const auto& registro : historialMantenimiento){
        cout << registro.getDetalles() << endl; 
    }

/* separacion */
    cout <<"--------------------------- "<< endl;   
}


/** Implementacion de los metodos de la clase VehiculoTrabajo **/

VehiculoTrabajo::VehiculoTrabajo(string m, string mod, int km_i,
    float rend, bool hibrido): Automotor(m, mod, km_i),
    rendimientoGasolinaKm(rend),
    es_hibrido(hibrido){};

/** mostramos los detalles del vehiculo **/
/* no recibe parametros */

void VehiculoTrabajo::mostrarDetalles()const
{
    cout << "Vehiculo de Trabajo" << endl;
    Automotor::mostrarDetalles();

    cout <<"rendimiento:" << rendimientoGasolinaKm << "km/L | hibrido"
        << (es_hibrido ? "Y": "N") << endl;
}

/** calculamos el combustible necesario para una distancia dada **/
/* distancia_km Distancia en kilometros */
/* regresa un valor float (cantidad de combustible en litros) */

float VehiculoTrabajo::calcularCombustibleNecesario
(float distancia_km) const 
{
    return distancia_km / rendimientoGasolinaKm;
}

/** Implementacion de los metodos de la clase VehiculoPersonal **/

VehiculoPersonal::VehiculoPersonal(string m, string mod, int km_i, int hp):
Automotor(m, mod, km_i), potenciaHp(hp){};

/** mostramos los detalles del vehiculo **/
/* no recibe parametros */
void VehiculoPersonal::mostrarDetalles() const 
{
    cout << "Vehiculo Personal" << endl;

    Automotor::mostrarDetalles();

    cout << "potencia:" << potenciaHp << "HP" << endl;
}

/** activamos el modo deportivo del vehiculo **/
/* no recibe parametros */
void VehiculoPersonal::activarModoDeportivo() const 
{
    cout << marca << "" << modelo << "Personal" << endl;
}

/** Implementacion de los metodos de la clase Conductor **/

Conductor::Conductor(int id, string nom):
idEmpleado(id), nombre(nom), vehiculoAsignado(nullptr),
kmConducidosTotal(0){};


/** asignamos un vehiculo al conductor **/
/* vehiculo Puntero al vehiculo a asignar */
void Conductor::asignarVehiculo(Automotor* vehiculo)
{
    vehiculoAsignado = vehiculo; 
    cout << "Vehiculo asignado a:" << nombre << "." << endl; 
}

/** registramos un trabajo realizado por el conductor **/
/* km Kilometros recorridos en el trabajo */
void Conductor::registrarTrabajo(int km){
    if (vehiculoAsignado) {
        vehiculoAsignado->registrarViaje(km);
        kmConducidosTotal += km;

        cout << "conductor" << nombre << "total" << kmConducidosTotal <<
            "km" << endl;
    }
    else {
        cout << "El conductor no tiene vehiculo" << endl;
    }
}