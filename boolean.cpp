#include"boolean.h"

boolean streq (String s1, String s2)
{
 int i = 0;
 boolean iguales = TRUE;
while (iguales && (s1[i] != '\0') && (s2[i] != '\0'))
{
 if (s1[i] != s2[i])
 iguales = FALSE;
 i++;
}
 if ((s1[i] != '\0') || (s2[i] != '\0'))
 iguales = FALSE;
return iguales;
}
