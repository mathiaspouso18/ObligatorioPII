#include "Vehiculo.h"

void MostrarVehiculo(Vehiculo v)
{
    String s;
    printf("\t\t");
    printf("Datos vehiculo");
    printf("\n\t\t");
    printf("Matricula: ");
    Print(v.matricula);
    printf("\n\t\t");
    printf("Departamento: ");
    Print(v.departamento);
    printf("\n\t\t");
    printf("Cedula del conductor: %ld", v.CI);
    printf("\n\t\t");
    printf("Hora de ingreso: ");
    MostrarHora(v.horaIng);
    printf("\n\t\t");
    printf("Tipo de Vehiculo: ");
    if(v.tipoV == AUTO)
    {
        printf("Auto");
        printf("\n\t\t");
        printf("Marca: ");
        DarMarca(v, s);
        Print(s);
        printf("\n\t\t");
        printf("Anio: %d", DarAnio(v));
        printf("\n");

    }
    else
    {
        printf("Camioneta");
        printf("\n\t\t");
        printf("Modelo: ");
        DarModelo(v, s);
        Print(s);
        printf("\n\t\t");
        printf("Capacidad de carga: %d", DarCapacidadCarga(v));
        printf("\n");
    }
}

void CrearVehiculo(Vehiculo &v, String matricula)
{
    int tp, anio;
    long int ccarga;
    String marca,modelo;

    StrCopy(matricula, v.matricula);
    printf("\t\t");
    printf("Ingrese departamento: ");
    Scan(v.departamento);
    printf("\t\t");
    printf("Ingrese cedula del conductor: ");
    scanf("%ld", &v.CI);
    CargarHora(v.horaIng);
    printf("\t\t");
    printf("Ingrese el tipo de vehiculo 1 - Auto; 2 - Camioneta: ");
    scanf("%d", &tp);
    if(tp == 1)
    {
        v.tipoV = AUTO;
        printf("\t\t");
        printf("Ingrese la marca: ");
        Scan(marca);
        printf("\t\t");
        printf("Ingrese el anio: ");
        scanf("%d", &anio);
        CargarAuto(v.Datos.a, marca, anio);

    }
    else
    {
        v.tipoV = CAMIONETA;
        printf("\t\t");
        printf("Ingrese el Modelo: ");
        Scan(modelo);
        printf("\t\t");
        printf("Ingrese la Capacidad de Carga: ");
        scanf("%ld", &ccarga);
        CargarCarmioneta(v.Datos.c, modelo, ccarga);
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

void DarDepartamento(Vehiculo v, String &s)
{
    StrCopy(v.departamento, s);
}

void DarModelo(Vehiculo v, String &modelo)
{
    StrCopy(v.Datos.c.Modelo, modelo);
}

long int DarCapacidadCarga(Vehiculo v)
{
    return v.Datos.c.CapacidadCarga;
}


void DarMarca(Vehiculo v, String &s)
{
    StrCopy(v.Datos.a.Marca, s);
}

int DarAnio(Vehiculo v)
{
    return v.Datos.a.anio;
}
