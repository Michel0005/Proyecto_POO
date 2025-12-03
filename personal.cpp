#include <iostream>
#include <string> 
#include <vector> 
#include "automotor.cpp"
#include "trabajo.cpp"
#include "mantenimiento.cpp"
#pragma once 
using namespace std; 

class VehiculoPersonal : public Automotor {
protected:
    int potencia_hp; 

public:
    VehiculoPersonal(string m, string mod, int km_i, int hp);

    int getPotenciaHP(){
        return potencia_hp;
    }

    void mostrarDetalles()const override;
    void ActivarModoDeportivo()const;
};