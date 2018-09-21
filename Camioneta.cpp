#include "Camioneta.h"

void DarModelo(Camioneta c, String &modelo)
{
    StrCopy(c.Modelo, modelo);
}

long int DarCapacidadCarga(Camioneta c)
{
    return c.CapacidadCarga;
}
