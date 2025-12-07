/** Definimos las clases principales Automotor y ResgistroMantenimiento
 *  que nos dan los datos y el historial de mantenimiento de un vehiculo **/
// Autor: Andre Michel Salgado Hidalgo | A01714887
// Fecha:  7 de diciembre de 2025

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
    vector<RegistroMantenimiento> historialMantenimiento;

private:
    int yearFabricacion = 2022;

public: 
/** Constructor de la clase Automotor
 *  m Marca del vehiculo
 *  mod Modelo del vehiculo
 *  km_i Kilometraje inicial
 **/
    Automotor(string m, string mod, int km_i);

/** obtenemos la marca del vehiculo **/
/* no recibe parametros */
/* regresa la marca */
    string getMarca ()
    {
        return marca;
    }
/** obtenemos el modelo del vehiculo **/
/* no recibe parametros */
/* regresa el modelo */
    string getModelo() {
        return modelo;
    }
/** obtenemos el kilometraje del vehiculo **/
/* no recibe parametros */
/* regresa el kilometraje */
    int getKilometraje()
    {
        return kilometraje;
    }
/** obtenemos el año de fabricacion del vehiculo **/
/* no recibe parametros */
/* Regresa el año de fabricacion */
    int getYearFabricacion() 
    {
        return yearFabricacion;
    }

/** registramos un viaje y actualizamos el kilometraje del vehiculo **/
/* km_recorridos Kilometros recorridos en el viaje */

    void registrarViaje(int km_recorridos);

/** mostramos los detalles del vehiculo **/
/* no recibe parametros */
/* No regresa valor */

    virtual void mostrarDetalles()const;

/** registramos un mantenimiento en el historial del vehiculo **/
/* desc Descripcion del mantenimiento
   fecha Fecha del mantenimiento */
/* No regresa valor */

    void registrarMantenimiento(string desc, string fecha);

/** mostramos el historial de mantenimiento del vehiculo **/
/* no recibe parametros */
/* No regresa valor */

    void mostrarHistorialMantenimiento();
};