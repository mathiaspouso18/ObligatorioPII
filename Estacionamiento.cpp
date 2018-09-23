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
{
    String s1;
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
{
    String s1;
    boolean Existe=FALSE;
    int i=0;
    do
    {
           DarMatricula(arreV.arre[i], s1);
           if (streq (s1,s) == TRUE)
           Existe=TRUE;
           else
           i++;

    }while((i<arreV.tope)&&(Existe==FALSE));

    return i;
}

void RegistrarPartida (ArregloVeh &arreV, Hora &h, String matricula)
{
    int i = 0;
    int p = 0;


   if (DarPosicion(arreV,matricula) < arreV.tope)
   {
        p = DarPosicion(arreV,matricula);
        arreV.arre[arreV.tope] = arreV.arre[p];
        for(p = p+1;p<arreV.tope;p++)
        {
           arreV.arre[p-1]=arreV.arre[p];
        }
        arreV.tope--;

        printf("\t\tIngrese hora de salida: \n");
        CargarHora(h);
   }
   else
   {
        printf("No se encuentra la Matricula para Registrar su partida");
   }
}

void DetallePorMatricula(ArregloVeh arreV)
{
    int posicion;
    String matricula;

    printf("\n");
    printf("\tIngrese la matricula por la cual buscar: ");
    Scan(matricula);
    posicion = DarPosicion(arreV, matricula);

    if(posicion < 0 || posicion > arreV.tope)
    {
        printf("\t\t");
        printf("No existe vehiculo registrado con esa matricula.");
        printf("\n");
    }
    else
    {
        printf("\n");
        MostrarVehiculo(arreV.arre[posicion]);
    }
}

void MostrarConteoCantidades(ArregloVeh arreV)
{
    int i, a = 0, c = 0;
    for(i = 0; i < arreV.tope; i++)
    {
        if(DarTipoVehiculo(arreV.arre[i]) == AUTO)
            a++;
        else
            c++;
    }

    printf("\n\tHay %d autos y %d camionetas\n", a, c);
}

void MostrarCantidadPorDepto(ArregloVeh arreV)
{
    String s, s2;
    printf("\n\tIngrese el departamento por el cual buscar: ");
    Scan(s);

    int i, total = 0;
    for(i = 0; i < arreV.tope; i++)
    {
        DarDepartamento(arreV.arre[i], s2);
        if(streq(s2, s))
            total++;
    }

    printf("\n\tHay %d vehiculos matriculados en ese departamento", total);
    printf("\n");
}

void ListarTodosVehiculos(ArregloVeh arreV)
{
    int i;
    String matricula;
    printf("\n");
    for(i = 0; i < arreV.tope; i++)
    {
        DarMatricula(arreV.arre[i], matricula);
        printf("\t");
        printf("Matricula: ");
        Print(matricula);
        printf(" | ");
        printf("Cedula: %d", DarCedula(arreV.arre[i]));
        printf(" | ");
        printf("%Hora de ingreso: %d:%d", DarHora(DarHoraIng(arreV.arre[i])), DarMinutos(DarHoraIng(arreV.arre[i])));
        printf("\n");
    }
}

void ListarCantidadHoraDeterminada(ArregloVeh arreV)
{
    int _hora, minutos, i;

    printf("\n\tIngreso de hora actual: \n");
    printf("\t\tIngrese hora: ");
    scanf("%d", &_hora);

    while(_hora < 8 || _hora > 22)
    {
        printf("\t\tLa hora debe estar entre 8 y 22; Ingrese nuevamente: ");
        scanf("%d", &_hora);
    }

    printf("\t\tIngrese minutos: ");
    scanf("%d", &minutos);
    while(minutos < 0 || minutos > 59)
    {
        printf("\t\tLos minutos deben estar entre 0 y 59; Ingrese nuevamente: ");
        scanf("%d", &minutos);
    }

    printf("\n");

    for(i = 0; i < arreV.tope; i++)
    {
        if(DarHora(DarHoraIng(arreV.arre[i])) == _hora)
        {
            if(DarMinutos(DarHoraIng(arreV.arre[i])) == minutos)
            {
                MostrarVehiculo(arreV.arre[i]);
            }
        }
    }
}

void ListarCamionetasCapCarga(ArregloVeh arreV)
{
    int i;
    int capCarga = 0;
    scanf("%d", &capCarga);
    printf("\tIngrese capacidad de carga: ");
    for(i = 0; i < arreV.tope; i++)
    {
        if(DarTipoVehiculo(arreV.arre[i]) == CAMIONETA)
            if(DarCapacidadCarga(arreV.arre[i]) > capCarga)
                MostrarVehiculo(arreV.arre[i]);
    }
}
