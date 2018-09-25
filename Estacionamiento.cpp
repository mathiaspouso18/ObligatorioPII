#include"Estacionamiento.h"

void IngresarVehiculo(ArregloVeh &arreV)
{
    Vehiculo v;
    String matricula;
    printf("\n\t");
    printf("Menu Ingreso de Vehiculos");
    printf("\n\n\t");
    printf("Informacion de vehiculo ", arreV.tope + 1);
    printf("\n\n");
    printf("\t\t");
    printf("Ingrese matricula: ");
    Scan(matricula);
    if (arreV.tope < TAM)
    {
       if(!ExisteVehiculo(arreV, matricula))
        {
            CrearVehiculo(v, matricula);
            arreV.arre[arreV.tope] = v;
            arreV.tope++;
        }
        else
        {
            printf("\t\tYa se ingreso un vehiculo con esa matricula\n");
        }
    }
    else
    {
        printf("\t\tEl estacionamiento esta lleno\n");
    }
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
    int i = 0, pos = -1;
    do
    {
           DarMatricula(arreV.arre[i], s1);
           if (streq (s1,s))
           {
                pos = i;
                Existe=TRUE;
           }
           else
                i++;

    }while((i<arreV.tope)&&(Existe==FALSE));

    return pos;
}

void RegistrarPartida (ArregloVeh &arreV)
{
   int p = 0, _hora = 0, minutos = 0, ticket = 0, difHora = 0;
   String s;

   printf("\n\tIngrese matricula a eliminar: ");
   Scan(s);

   p = DarPosicion(arreV, s);

   if (p < arreV.tope && p >= 0)
   {
        printf("\tIngreso hora de salida \n");
        printf("\tIngrese hora: ");
        scanf("%d", &_hora);
        printf("\tIngrese minutos: ");
        scanf("%d", &minutos);

        difHora = _hora - DarHora(DarHoraIng(arreV.arre[p]));
        ticket = difHora * 100;

        arreV.arre[arreV.tope] = arreV.arre[p];
        for(p = p+1;p<arreV.tope;p++)
        {
           arreV.arre[p-1]=arreV.arre[p];
        }
        arreV.tope--;
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

    if(arreV.tope == 0)
    {
        printf("\tNo hay vehiculos registrados\n");
    }
    else
    {
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
}

void ListarCantidadHoraDeterminada(ArregloVeh arreV)
{
    int _hora, minutos, i, contador = 0;

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
        if(DarHora(DarHoraIng(arreV.arre[i])) >= _hora && DarHora(DarHoraIng(arreV.arre[i])) <= _hora+1)
        {
            if(DarMinutos(DarHoraIng(arreV.arre[i])) >= minutos && DarMinutos(DarHoraIng(arreV.arre[i])) <= minutos+60)
            {
                MostrarVehiculo(arreV.arre[i]);
                contador++;
            }
        }
    }
    if(contador == 0)
        printf("\tNo hay vehiculos registrados para la hora %d:%d\n", _hora, minutos);
}

void ListarCamionetasCapCarga(ArregloVeh arreV)
{
    int i, capCarga = 0, contador = 0;
    printf("\n\tIngrese capacidad de carga: ");
    scanf("%d", &capCarga);
    printf("\n");

    for(i = 0; i < arreV.tope; i++)
    {
        if(DarTipoVehiculo(arreV.arre[i]) == CAMIONETA)
            if(DarCapacidadCarga(arreV.arre[i]) > capCarga)
            {
                MostrarVehiculo(arreV.arre[i]);
                contador++;
            }
            printf("\n");
    }

    if(contador == 0)
        printf("\tNo hay vehiculos registrados\n");
}

void calcularticket(int sumahora, int sumaminutos,int &totalticket)
{
	totalticket = sumahora * 100;

	if(sumaminutos > 0)
    	totalticket = totalticket+60;


}


