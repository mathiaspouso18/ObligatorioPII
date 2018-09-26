#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED
#include "Vehiculo.h"

const int TAM=50;

typedef struct{ Vehiculo arre[TAM];
                int tope;
              } ArregloVeh;

 // Ingresar vehiculo al arreglo
 //PRECONDICION: No puede existir previamente en el arreglo y el arreglo no puede estar lleno.
void IngresarVehiculo(ArregloVeh &arreV );

//inicializar el tope en 0.
void inicializartope(ArregloVeh &arreV);

//Dada una matricula saber si existe o no en el estacionamiento.
boolean ExisteVehiculo(ArregloVeh arreV, String s);

//Dada una Matricula devolvemos su posicion en el arreglo. En caso de no existir, retornamos -1.
int DarPosicion(ArregloVeh arreV, String s);

//Dada una matricula, lo retiramos del estacionamiento.
void RegistrarPartida (ArregloVeh &arreV, int &totalRec);

//Dada una matricula, muestra el detalle del vehiculo.
void DetallePorMatricula(ArregloVeh arreV);

//Muestra en pantalla la cantidad de autos y camionetas en el estacionamiento.
void MostrarConteoCantidades(ArregloVeh arreV);

//Dado un departamento, muestra la cantidad de vehiculos matriculados en el.
void MostrarCantidadPorDepto(ArregloVeh arreV);

//Muestra la matricula, cedula del conductor y hora de ingreso de todos los vehiculos en el estacionamiento.
void ListarTodosVehiculos(ArregloVeh arreV);

//A partir de una hora ingresada por el usuario, muestra los vehiculos que ingresaron a partir de 1 hora luego de la ingresada.
//Ejemplo: Si se ingresa la hora 18:00, se mostraran los vehiculos ingresados entre las 18:00 y las 19:00. De igual manera si
//se ingresa 19:43, se mostraran los ingresados entre las 19:43 y las 20:43.
void ListarCantidadHoraDeterminada(ArregloVeh arreV);

//Dada una capacidad de carga, se muestran las camionetas que superen dicha capacidad.
//Ejemplo: Se ingresa 300, se mostraran las camionetas con capacidad de 300 a mas.
void ListarCamionetasCapCarga(ArregloVeh arreV);

//Muestra el total recaudado hasta el momento, ya sea de vehiculos que no se fueron como si ya se fueron.
void TotalHastaElMomento(ArregloVeh arreV, int &totalRec);

//Calcula el precio del ticket.
int CalcularTicket(int sumahora, int sumaminutos);

#endif // ESTACIONAMIENTO_H_INCLUDED
