#include "String.h"

void Scan(String &s)
{
    char c;
    int i = 0;
    fflush(stdin); //Tuve que agregar esto para limpiar el buffer ya que no me dejaba insertar la matricula
    scanf("%c", &c);
    while(c != '\n' && i < MaxString - 1)
    {
        s[i] = c;
        scanf("%c", &c);
        i++;
    }
    s[i] = '\0';
}

void StrCopy(String orig, String &copia)
{
    int i = 0;

    while(orig[i] != '\0')
    {
        copia[i] = orig[i];
        i++;
    }
    copia[i] = '\0';
}

void Print(String s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        printf("%c", s[i]);  i++;
    }
}

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




