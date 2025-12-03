#include <iostream>
#include <string>
#include "automotor.cpp"
#include "trabajo.cpp"
#include "personal.cpp"
#include "mantenimiento.cpp"
#pragma once 
using namespace std; 

class Conductor {
protected:
    int km_conducidos_total;
private:
    int id_empleado; 
    Automotor* vehiculo_asignado;

public: 
    string nombre; 

    Conductor(int id, string nom);

    int getId (){
        return id_empleado; 
    }
    int getKmTotales(){
        return km_conducidos_total;
    }
    void asignarVehiculo(Automotor* vehiculo);
    void registrarTrabajo(int km);
};
