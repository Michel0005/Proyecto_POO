#include <iostream>
#include <string> 
#include <vector> 
#include "automotor.cpp"
#include "trabajo.cpp"
#include "personal.cpp"
#include "mantenimiento.cpp"
#include "implementacion.cpp"
using namespace std;

int main(){

    cout << "Creacion de vehiculos" << endl;
    
    VehiculoTrabajo corolla("Toyota", "Corolla", 500, 22.5, true);
    VehiculoPersonal mustang("Ford", "Mustang", 100, 450); 

    cout << "Resgistro de mantenimento" << endl; 
    corolla.registrarMantenimiento
    ("Cambio de aceite y filtro", "2025-12-03");

    cout <<  "Conductor" << endl;
    Conductor james(1714887, "James Sunderland"); 
    james.asignarVehiculo(&corolla);
    james.registrarTrabajo(300);
    corolla.registrarMantenimiento("revision de frenos", "2025-12-12");

    cout << "Historial" << endl; 
    corolla.mostrarHistorialMantenimiento();

    cout << "Fin" << endl; 
    mustang.mostrarDetalles();
    mustang.mostrarHistorialMantenimiento();

    return 0;
};