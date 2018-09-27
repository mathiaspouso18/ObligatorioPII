#ifndef CAMIONETA_H_INCLUDED
#define CAMIONETA_H_INCLUDED
#include "String.h"

typedef struct{String Modelo;
               long int CapacidadCarga;} Camioneta;

//Carga el tipo de vehiculo camioneta.
void CargarCarmioneta(Camioneta &c, String s, long int x);

//Devuelve la capacidad de carga del vehiculo tipo Camion.
long int DarCapacidadCargaCamioneta(Camioneta c);

//Devuelve el modelo del vehiculo.
void DarModeloCamioneta(Camioneta c, String &modelo);

#endif // CAMIONETA_H_INCLUDED
