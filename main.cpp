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

        switch(opcion2)
        {
            case 2: MostrarConteoCantidades(arreV);
            break;
            case 3: MostrarConteoCantidades(arreV);
            break;
            case 4: ListarTodosVehiculos(arreV);
            break;
            case 5: DetallePorMatricula(arreV);
            break;
        }
        opcion2 = 0;//limpio las variables dejandolas en 0;

    }while(opcion != 4);

    opcion = 0;//limpio las variables dejandolas en 0;
}
