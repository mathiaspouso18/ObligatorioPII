#include "Camioneta.h"

void DarModelo(Camioneta c, String &modelo)
{
    StrCopy(c.Modelo, modelo);
}

long int DarCapacidadCarga(Camioneta c)
{
    return c.CapacidadCarga;
}

void CargarCarmioneta(Camioneta &c, String s, int x)
{
    StrCopy(s, c.Modelo);
    c.CapacidadCarga = x;
}
