#include <iostream>
#include <string> 
#include <vector> 
#include "automotor.cpp"
#include "mantenimiento.cpp"
#pragma once 
using namespace std; 

class VehiculoTrabajo : public Automotor {
private: 
    bool es_hibrido; 
public: 
    float rendimiento_gasolina_km; 

    VehiculoTrabajo(string m, string mod, int km_i,
    float rend, bool hibrido);

    bool esHibrido(){
        return es_hibrido; 
    }

    void mostrarDetalles() const override;
    float calcularCombustibleNecesario (float distancia_km) const;

};