#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED
#include "Vehiculo.h"
#include"boolean.h"

const int TAM=50;

typedef struct{ Vehiculo arre[TAM];
                int tope;
              }ArregloVeh;
 // ingresar vehiculo al arreglo no registrado
void insertarVehiculo(ArregloVeh &arreV );
//inicializar el tope en 0
void inicializartope(ArregloVeh &arreV);
//Comprobar si existe vehiculo en el arreglo con matricula
boolean ExisteVehiuculo(ArregloVeh arreV, String s);
#endif // ESTACIONAMIENTO_H_INCLUDED
