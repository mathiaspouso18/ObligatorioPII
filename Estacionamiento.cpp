#include"Estacionamiento.h"

void IngresarVehiculo(ArregloVeh &arreV)
{
    Vehiculo v;
    printf("\n\t");
    printf("Menu Ingreso de Vehiculos");
    printf("\n\n\t");
    printf("Informacion de vehiculo:", arreV.tope + 1);
    printf("\n\n");
    CrearVehiculo(v);
    arreV.arre[arreV.tope] = v;
    arreV.tope++;

}


void inicializartope(ArregloVeh &v)
{
       v.tope=0;
}


boolean ExisteVehiculo(ArregloVeh arreV, String s)
{   String s1;
    boolean Existe=FALSE;
    int i=0;
    do
    {
           DarMatricula(arreV.arre[i],s1);
           if (streq (s1,s) == TRUE)
           Existe=TRUE;
           else
           i++;

    }while((i<arreV.tope)&&(Existe==FALSE));

return Existe;
}


int DarPosicion(ArregloVeh arreV, String s)
{String s1;
    boolean Existe=FALSE;
int i=0;
do
{
       DarMatricula(arreV.arre[i],s1);
       if (streq (s1,s) == TRUE)
       Existe=TRUE;
       else
       i++;

}while((i<arreV.tope)&&(Existe==FALSE));

return i;
}


void RegistrarPartida (ArregloVeh &arreV,Hora &h, String matricula)
{
    int i= 0;
    int p =0;


   if (DarPosicion(arreV,matricula)<arreV.tope)
   {
        p=DarPosicion(arreV,matricula);
       arreV.arre[arreV.tope]=arreV.arre[p];
           for(p=p+1;p<arreV.tope;p++)
            {
                arreV.arre[p-1]=arreV.arre[p];
            }
            arreV.tope--;


    printf("Hora de Salida\n");
    CargarHora(h);

    }
   else
        printf("No se encuentra la Matricula para Registrar su partida");


}
