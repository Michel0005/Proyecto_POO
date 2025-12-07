/** Funcion principal donde se ejecuta el programa
 * demostrando la creacion y el uso de las clases 
 * Automotor, VehiculoTrabajo, VehiculoPersonal, Conductor **/
 // Autor: Andre Michel Salgado Hidalgo | A01714887
 // Fecha:  7 de diciembre de 2025

#include <iostream>
#include <string> 
#include <vector> 
#include "automotor.cpp"
#include "trabajo.cpp"
#include "personal.cpp"
#include "mantenimiento.cpp"
#include "implementacion.cpp"

using namespace std;

/** Funcion principal **/
int main(){

    /* bloque de creacion de vehiculos */
    cout << "Creacion de vehiculos" << endl;
    
    VehiculoTrabajo corolla("Toyota", "Corolla", 500, 22.5, true);
    VehiculoPersonal mustang("Ford", "Mustang", 100, 450); 

    /* mostramos detalles iniciales */
    cout << "Detalles iniciales" << endl;
    cout << "Resgistro de mantenimento" << endl; 
    corolla.registrarMantenimiento
    ("Cambio de aceite y filtro", "2025-12-03");
    mustang.registrarMantenimiento
    ("Alineacion y balanceo", "2025-11-25");

    /* bloque de creacion de conductor */
    cout <<  "Conductor" << endl;
    Conductor james(1714887, "James Sunderland"); 
    james.asignarVehiculo(&corolla);
    james.registrarTrabajo(300);
    corolla.registrarMantenimiento("revision de frenos", "2025-12-12");
    james.registrarTrabajo(150);
    james.registrarTrabajo(200);
    corolla.registrarMantenimiento("Cambio de llantas", "2025-12-20");
    james.registrarTrabajo(100);
    cout << "Fin de trabajos" << endl;

    /* mostramos detalles finales */
    cout << "Detalles finales" << endl;
    cout << "Historial" << endl; 
    corolla.mostrarHistorialMantenimiento();

    cout << "Fin" << endl; 
    mustang.mostrarDetalles();
    mustang.mostrarHistorialMantenimiento();

    return 0;
};