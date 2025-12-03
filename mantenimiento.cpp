#include <iostream>
#include <string> 
#include <vector> 
#pragma once 
using namespace std; 

class RegristoMantenimiento {
private:
    int kilometraje_mantenimiento;
    string descripcion;
    string fecha; 

public:
    RegristoMantenimiento(int km, string desc, string f):
    kilometraje_mantenimiento(km), descripcion(desc), fecha(f){

    };

    string getDetalles() const{
    return "[ "+ fecha +" ] KM:" + to_string(kilometraje_mantenimiento)
        + "  descripcion: " + descripcion; 
    }

};