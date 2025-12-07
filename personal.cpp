/** El programa de gestion de vehiculos personales nos permite
gestionar el kilometraje y mantener un historial de mantenimiento 
del vehiculo personal de nuestro personaje (James Sunderland) **/
 // Autor: Andre Michel Salgado Hidalgo | A01714887
 // Fecha:  7 de diciembre de 2025

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
    int potenciaHp; 

public:
/** Constructor de la clase VehiculoPersonal
 *  m Marca del vehiculo
 *  mod Modelo del vehiculo
 *  km_i Kilometraje inicial
 *  hp Potencia en caballos de fuerza
 *  no regresa valor  
 */
    VehiculoPersonal(string m, string mod, int km_i, int hp);

/** obtenemos la potencia en HP (caballos de fuerza) del vehiculo **/
/* no recibe parametros */
/* regresa un valor entero (potencia en HP(caballos de fuerza)) */
    int getPotenciaHP()
    {
        return potenciaHp;
    }

/** mostramos los detalles del vehiculo **/
/* no recibe parametros */
/* No regresa valor */
    void mostrarDetalles()const override;

/** activamos el modo deportivo del vehiculo **/
/* no recibe parametros */
/* No regresa valor */
    void activarModoDeportivo()const;
};