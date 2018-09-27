#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include"String.h"

typedef struct{
          String Marca;
          int anio;
            }Auto;

//Carga los datos del vehiculo tipo auto.
void CargarAuto(Auto &a, String marca, int anio);

//Devuelve la marca del vehiculo.
void DarMarcaAuto(Auto a, String &s);

//Devuelve el año del vehiculo.
int DarAnioAuto(Auto a);

#endif // AUTO_H_INCLUDED
