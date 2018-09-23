#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED
#include "Vehiculo.h"

const int TAM=50;

typedef struct{ Vehiculo arre[TAM];
                int tope;
              } ArregloVeh;

 // ingresar vehiculo al arreglo no registrado
void IngresarVehiculo(ArregloVeh &arreV );
//inicializar el tope en 0
void inicializartope(ArregloVeh &arreV);
//Comprobar si existe vehiculo en el arreglo con matricula
boolean ExisteVehiculo(ArregloVeh arreV, String s);
//Fado una Matricula Devolvemos su posicion en el arreglo
int DarPosicion(ArregloVeh arreV, String s);
//Dado una Matricula Eliminar
void RegistrarPartida (ArregloVeh &arreV,Hora &h, String matricula);

void DetallePorMatricula(ArregloVeh arreV);

void MostrarConteoCantidades(ArregloVeh arreV);

void MostrarCantidadPorDepto(ArregloVeh arreV);

void ListarTodosVehiculos(ArregloVeh arreV);

void ListarCantidadHoraDeterminada(ArregloVeh arreV);

void ListarCamionetasCapCarga(ArregloVeh arreV);

#endif // ESTACIONAMIENTO_H_INCLUDED
