#include"Estacionamiento.h"
void insertarVehiculo(ArregloVeh &arreV)
{
    Vehiculo v;
    printf("Ingrese vehiculo");
    CrearVehiculo(v);
    arreV.arre[arreV.tope] = v;
    arreV.tope++;

}


void inicializartope(ArregloVeh &v)
{
       v.tope=0;

}


boolean ExisteVehiuculo(ArregloVeh arreV, String s)
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

