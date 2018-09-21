#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include"String.h"
typedef struct{
          String Marca;
          int anio;
            }Auto;


//Selectora que da marca de Auto
void DarMarca(Auto a, String &s);
//Selectora que da anio de fabricacion de auto
int Daranio(Auto a);


#endif // AUTO_H_INCLUDED
