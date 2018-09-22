#include "Menu.h"

void MenuPrincipal(int &opcion)
{
    printf("\t\n\t");
    printf("Menu Principal");
    printf("\n\n\t");
    printf("1 - Registrar ingreso de un vehiculo");
    printf("\n\t");
    printf("2 - Registrar partida de un vehiculo");
    printf("\n\t");
    printf("3 - Menu de consultas y listados");
    printf("\n\t");
    printf("4 - Salir del programa");
    printf("\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
}

void MenuListados(int &opcion2)
{
    printf("\t\n\t");
    printf("Menu Consultas y Listados");
    printf("\n\n\t");
    printf("1 - Total recaudado hasta el momento por concepto de tickets");
    printf("\n\t");
    printf("2 - Cantidad de autos y cantidad de camionetas registrados actualmente");
    printf("\n\t");
    printf("3 - Cantidad de vehiculos matriculados en un departamento determinado");
    printf("\n\t");
    printf("4 - Listado de vehiculos registrados actualmente");
    printf("\n\t");
    printf("5 - Listado detallado de un vehiculo");
    printf("\n\t");
    printf("6 - Listado de vehiculos que ingresaron dentro de una hora determinada");
    printf("\n\t");
    printf("7 - Listado de camionetas que superan una capacidad de carga determinada");
    printf("\n\t");
    printf("8 - Volver al menu principal");
    printf("\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion2);
}
