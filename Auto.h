#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include"String.h"

typedef struct{
          String Marca;
          int anio;
            }Auto;


void CargarAuto(Auto &a, String marca, int anio);

#endif // AUTO_H_INCLUDED
