#ifndef CAMIONETA_H_INCLUDED
#define CAMIONETA_H_INCLUDED
#include "String.h"

typedef struct{String Modelo;
               long int CapacidadCarga;} Camioneta;

//Carga el tipo de vehiculo camioneta.
void CargarCarmioneta(Camioneta &c, String s, long int x);


#endif // CAMIONETA_H_INCLUDED
