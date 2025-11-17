#include <iostream>
#include <string> 
using namespace std; 

class Vehiculo {
public:
    string marca;
    string modelo;
    int kilometraje;
    float consumo_km_litro;

    Vehiculo(string m, string mod, int km_inicial, float consumo)
        : marca(m), modelo(mod), kilometraje(km_inicial), consumo_km_litro(consumo) {
        
    }

    // metodos 
    
    
    void registrarViaje(int km_recorridos) {
        kilometraje += km_recorridos;
        cout << "Kilometraje actualizado a: " << kilometraje << " km." << endl;
    }

    float calcularCombustibleNecesario(float distancia_km) const {
        return distancia_km / consumo_km_litro;
    }
};

class Conductor {
public:
    string nombre;
    int id_empleado;
    Vehiculo* vehiculo_asignado; 
    int km_conducidos_total;

    
    Conductor(int id, string nom)
        : id_empleado(id), nombre(nom), vehiculo_asignado(nullptr), km_conducidos_total(0) {
        
    }

    // metodos 

    
    void asignarVehiculo(Vehiculo* vehiculo) {
        vehiculo_asignado = vehiculo;
        cout << "Vehiculo asignado a " << nombre << "." << endl;
    }


    void registrarTrabajo(int km) {   
        vehiculo_asignado->registrarViaje(km); 
        km_conducidos_total += km;
        cout << "Conductor " << nombre << " totalizó " << km_conducidos_total << " km." << endl;
    }
};

class RegistroMantenimiento {
public:
    int id_registro;
    Vehiculo* vehiculo; 
    string descripcion;
    float costo;
    int km_servicio;
    

    // constructor 
    RegistroMantenimiento(int id, Vehiculo* v, string desc, float c)
        : id_registro(id), vehiculo(v), descripcion(desc), costo(c) {
        km_servicio = vehiculo->kilometraje; 
    }

    // metodo
    void obtenerResumen() const {
        cout << "--- RESUMEN DE MANTENIMIENTO BASICO ---\n"
                  << "ID Registro: " << id_registro << "\n"
                  << "Vehiculo: " << vehiculo->marca << " " << vehiculo->modelo << "\n"
                  << "KM en servicio: " << km_servicio << " km\n"
                  << "Costo: $" << costo << endl;
    }
};


int main () {
    
    cout << "1. CREACION DE OBJETOS\n";
    Vehiculo camion_a("Ford", "Cargo", 10000, 4.5f); 
    Conductor james(1001, "james sunderland");

    cout << "\n 2. LLAMADA DE METODOS Y ASIGNACION \n";
    
    james.asignarVehiculo(&camion_a); 

    james.registrarTrabajo(500); 

    float combustible = camion_a.calcularCombustibleNecesario(900); 
    cout << "-> VEHICULO: Combustible necesario para 900 km: " << combustible << " litros." << endl;
    cout << "\n3. USO DEL REGISTRO DE MANTENIMIENTO\n";
    RegistroMantenimiento reg_1(202501, &camion_a, "Revision de 15000 KM", 550.00f);
    reg_1.obtenerResumen();


    return 0;
};