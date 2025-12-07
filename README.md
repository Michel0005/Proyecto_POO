# Proyecto_POO
El objetivo del proyecto es crear un sistema donde se gestione informacion para tener un historial de mantenimiento y viajes donde se agregan los KM a cierto vehiculo con fecha y que tipo de servicio se le hace a un vehiculo o asignar un vehiculo a un conductor. 

#Sirve para 
Modelar la gestion basica de vehiculos y personal en una flotilla donde guardamos la informacion del vehiculo y los separamos confome sus caracteristicas como ejemplo el vehiculo de trabajo es un auto hibrido y el personal es uno de combustion. Con este programa tambien podemos registrar de manera detallada aspectos de uso (kilometraje) por medio de la clase ResistroMantenimiento y se guarda en un historial de cada vehiculo. Tambien podemos asignarle un conductor a un vehiculo pudiendo vincular el trabajo de del conductor con el vehiculo.

#No sirve para
Mantener un historial complejo con mas detalles del mantenimiento realizado. Guardar los datos en archivos txt. Como el sistema depende de la consola solo usan cout y cin para la interaccion. 

-entradas
  1. Mantenimiento
  2. conductor
  3. viaje
  4. vehiculos
.

-proceso
1. asignar clases
2. registrar de trabajo
3. registrar primer mantenimiento
4. segundo mantenimiento
.

-salidas
1.Actualizacion de KM
2.Total de KM
3.Notificar Mantenimiento
4.Detalles del vehiculo
.

  Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ main.cpp -o main.exe"

correr en linux: "/.main.exe"

correr en windows: "./main.exe"

correr en Ios. " g++ main.cpp -o main.o" y ./main.o
