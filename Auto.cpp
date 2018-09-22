#include"Auto.h"


void CargarAuto(Auto &a, String marca, int anio)
{
    StrCopy(marca, a.Marca);
    a.anio = anio;
}

void DarMarca(Auto a, String &s)
{
    StrCopy(a.Marca,s);
}

int DarAnio(Auto a)
{
    return a.anio;
}
