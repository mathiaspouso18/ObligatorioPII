#include "String.h"

void Scan(String &s)
{
    char c;
    int i = 0;

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
        printf("%c", s[i]);  i++; }}
