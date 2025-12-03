#include <iostream>
#include <string> 
#include <vector> 
#include "mantenimiento.cpp"
#pragma once 
using namespace std; 

class Automotor {
protected: 
    string marca; 
    string modelo; 
    int kilometraje; 
    vector<RegristoMantenimiento> historial_mantenimiento;

private:
    int year_fabricacion = 2022;

public: 
    Automotor(string m, string mod, int km_i);

    string getMarca (){
        return marca;
    }
    string getModelo(){
        return modelo;
    }
    int getKilometraje(){
        return kilometraje;
    }
    int getYearFabricacion(){
        return year_fabricacion;
    }

    void registrarViaje(int km_recorridos);
    virtual void mostrarDetalles()const;

    void registrarMantenimiento(string desc, string fecha);
    void mostrarHistorialMantenimiento();
};