#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"
#include <stdio.h>

const int MaxString = 20;
typedef char String[MaxString];

void Scan(String &s);
void StrCopy(String orig, String &copia);
void Print(String s);
boolean streq (String s1, String s2);


#endif // STRING_H_INCLUDED
