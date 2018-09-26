#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"
#include <stdio.h>

const int MaxString = 20;
typedef char String[MaxString];

//Carga un string por teclado.
void Scan(String &s);

//Dados dos strings, copia el primero en el segundo.
void StrCopy(String orig, String &copia);

//Dado un string, lo imprime en pantalla.
void Print(String s);

//Dados dos strings, devuelve TRUE si son iguales, FALSE si son distintos.
boolean streq (String s1, String s2);


#endif // STRING_H_INCLUDED
