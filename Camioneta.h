#ifndef CAMIONETA_H_INCLUDED
#define CAMIONETA_H_INCLUDED
#include "String.h"

typedef struct{String Modelo;
               long int CapacidadCarga;} Camioneta;

void DarModelo(Camioneta c, String &modelo);
long int DarCapacidadCarga(Camioneta c);


#endif // CAMIONETA_H_INCLUDED
