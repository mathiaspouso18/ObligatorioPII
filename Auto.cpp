#include"Auto.h"

void CargarAuto(Auto &a, String marca, int anio)
{
    StrCopy(marca, a.Marca);
    a.anio = anio;
}

void DarMarcaAuto(Auto a, String &s)
{
    StrCopy(a.Marca, s);
}

int DarAnioAuto(Auto a)
{
    return a.anio;
}
