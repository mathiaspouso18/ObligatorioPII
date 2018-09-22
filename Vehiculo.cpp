#include "Vehiculo.h"

void MostrarVehiculo(Vehiculo v)
{
    String s;

    printf("Matricula: ");
    Print(v.matricula);
    printf("Departamento: ");
    Print(v.departamento);
    printf("Cedula del conductor: %ld", v.CI);
    printf("Hora de ingreso: ");
    MostarHora(v.horaIng);
    printf("Tipo de Vehiculo: ");
    if(v.tipoV == AUTO)
    {
        printf("Auto");
        printf("Marca: ");
        DarMarca(v.Datos.a, s);
        Print(s);
        printf("Anio: %d", DarAnio(v.Datos.a));

    }
    else
    {
        printf("Camioneta");
        printf("Modelo: ");
        DarModelo(v.Datos.c, s);
        Print(s);
        printf("Capacidad de carga: %d", DarCapacidadCarga(v.Datos.c));
    }
}

void CrearVehiculo(Vehiculo v)
{
    int tp, anio;
    String marca;
    printf("Ingrese la matricula: ");
    Scan(v.matricula);
    printf("Ingrese departamento: ");
    Scan(v.departamento);
    printf("Ingrese cedula del conductor: ");
    scanf("%ld", v.CI);
    CargarHora(v.horaIng);
    printf("Ingrese el tipo de vehiculo 1 - Auto; 2 - Camioneta");
    scanf("%d", &tp);
    if(tp == 1)
    {
        v.tipoV = AUTO;
        printf("Ingrese la marca: ");
        Scan(marca);
        printf("Ingrese el anio: ");
        scanf("%d", &anio);
        CargarAuto(v.Datos.a, marca, anio);

    }
    else
    {
        v.tipoV = CAMIONETA;
    }


}

void DarMatricula(Vehiculo v, String &mat)
{
    StrCopy(v.matricula, mat);
}

long int DarCedula(Vehiculo v)
{
    return v.CI;
}

Hora DarHoraIng(Vehiculo v)
{
    return v.horaIng;
}

TipoVehiculo DarTipoVehiculo(Vehiculo v)
{
    return v.tipoV;
}
