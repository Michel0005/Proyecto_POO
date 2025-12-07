/** conjunto de clases que se implementan en un sistema de gestion
de mantenimiento de vehiculos donde registramos datos basicos como:
el kilometraje y mantener un historial de mantenimiento **/
// Autor: Andre Michel Salgado Hidalgo | A01714887
// Fecha:  7 de diciembre de 2025

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
    float rendimientoGasolinaKm; 

/** Constructor de la clase VehiculoTrabajo
 *  m Marca del vehiculo
 *  mod Modelo del vehiculo
 *  km_i Kilometraje inicial
 * rend Rendimiento de gasolina en km/L
 * hibrido Indica si el vehiculo es hibrido
 * return no regresa valor  **/

    VehiculoTrabajo(string m, string mod, int km_i,
    float rend, bool hibrido);

/** obtenemos si el vehiculo es hibrido **/
/* no recibe parametros */
/* regresa un valor booleano */

    bool esHibrido()
    {
        return es_hibrido; 
    }

/** mostramos los detalles del vehiculo **/
/* no recibe parametros */
/* No regresa valor */

    void mostrarDetalles() const override;
/** calculamos el combustible necesario para una distancia dada **/
/* distancia_km Distancia en kilometros */
/* regresa un valor float (cantidad de combustible en litros) */

    float calcularCombustibleNecesario (float distancia_km) const;

};