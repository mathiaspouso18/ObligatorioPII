#include"Auto.h"

void CargarAuto(Auto &a, String marca, int anio)
{
    StrCopy(marca, a.Marca);
    a.anio = anio;
}

