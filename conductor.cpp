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
    int kmConducidosTotal;
private:
    int idEmpleado; 
    Automotor* vehiculoAsignado;

public: 
    string nombre; 

/** Constructor de la clase Conductor
 *  id Identificador unico del conductor
 * nom Nombre del conductor
 * return no regresa valor  **/
    
    Conductor(int id, string nom);

/** obtenemos el id del conductor **/
/* no recibe parametros */
/* regresa un valor entero (id del conductor) */
    int getId ()
    {
        return idEmpleado; 
    }

/** obtenemos el kilometraje total conducido por el conductor **/
/* no recibe parametros */
/* regresa un valor entero (kilometraje total conducido) */
    int getKmTotales()
    {
        return kmConducidosTotal;
    }

/** asignamos un vehiculo al conductor **/
/* vehiculo Puntero al vehiculo a asignar */
/* No regresa valor */
    void asignarVehiculo(Automotor* vehiculo);

/** registramos un trabajo realizado por el conductor **/
/* km Kilometros recorridos en el trabajo */
/* No regresa valor */
    void registrarTrabajo(int km);
};
