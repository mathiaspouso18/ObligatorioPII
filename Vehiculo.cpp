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
        DarMarca(v.Datos.a, s);
        Print(s);
        printf("\n\t\t");
        printf("Anio: %d", DarAnio(v.Datos.a));
        printf("\n");

    }
    else
    {
        printf("Camioneta");
        printf("\n\t\t");
        printf("Modelo: ");
        DarModelo(v.Datos.c, s);
        Print(s);
        printf("\n\t\t");
        printf("Capacidad de carga: %d", DarCapacidadCarga(v.Datos.c));
        printf("\n");
    }
}

void CrearVehiculo(Vehiculo &v)
{
    int tp, anio, ccarga;
    String marca,modelo;

    printf("\t\t");
    printf("Ingrese matricula: ");
    Scan(v.matricula);
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
        scanf("%d", &ccarga);
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
