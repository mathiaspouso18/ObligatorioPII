#include <iostream>
#include "Estacionamiento.h"
#include "Menu.h"

using namespace std;


int main()
{
    int opcion, opcion2;
    ArregloVeh arreV;
    inicializartope(arreV);
    printf("Bienvenido al control de vehiculos");
    printf("\n");

    do
    {
        MenuPrincipal(opcion);

        switch(opcion)
        {
            case 1: IngresarVehiculo(arreV);
            break;
            case 3: MenuListados(opcion2);
            break;

        }

    }while(opcion != 4);



}
