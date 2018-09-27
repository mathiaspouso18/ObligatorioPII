#include "Camioneta.h"

void CargarCarmioneta(Camioneta &c, String s, long int x)
{
    StrCopy(s, c.Modelo);
    c.CapacidadCarga = x;
}

void DarModeloCamioneta(Camioneta c, String &modelo)
{
    StrCopy(c.Modelo, modelo);
}

long int DarCapacidadCargaCamioneta(Camioneta c)
{
    return c.CapacidadCarga;
}
