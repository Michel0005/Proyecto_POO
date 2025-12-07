/** Definimos la clase RegistroMantenimiento para guardar 
los datos de un servicio de manteunimiento vehicular **/
// Autor: Andre Michel Salgado Hidalgo | A01714887
// Fecha:  7 de diciembre de 2025

#include <iostream>
#include <string> 
#include <vector> 
#pragma once 

using namespace std; 

class RegistroMantenimiento {
private:
    int kilometrajeMantenimiento;
    string descripcion;
    string fecha; 

public:
/** Constructores de la clase RegistroMantenimiento
 *  km Kilometraje al momento de mantenimiento 
 *  Descripcion del trabajo realizado
 *  f Fecha en que se realizo mantenimiento
 *  return no regresa valor  **/

    RegistroMantenimiento(int km, string desc, string f):
        kilometrajeMantenimiento(km), descripcion(desc), fecha(f) {

    };

/** obtenemos los detalles del mantenimiento en formato de texto
 *  Una cadena con la fecha, kilometraje y descripcion **/
    string getDetalles() const {
        return "[ " + fecha + " ] KM:" + to_string(kilometrajeMantenimiento)
            + "  descripcion: " + descripcion;
    }

};