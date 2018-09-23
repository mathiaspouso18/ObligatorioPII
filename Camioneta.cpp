#include "Camioneta.h"

void CargarCarmioneta(Camioneta &c, String s, long int x)
{
    StrCopy(s, c.Modelo);
    c.CapacidadCarga = x;
}
