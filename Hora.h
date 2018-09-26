#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <stdio.h>

typedef struct{int _hora;
			   int minutos;} Hora;

//Carga el estructurado hora.
//PRECIONDICION: La hora solo puede estar entre 8 y 22. Los minutos entre 0 y 59.
void CargarHora(Hora &h);

//Muestra el estructurado hora.
void MostrarHora(Hora h);

//Dada un estructurado hora, da el valor del componente Hora.
int DarHora(Hora h);

//Dada un estructurado hora, da el valor del componente Minutos.
int DarMinutos(Hora h);

//Calcula el tiempo que lleva el vehiculo en el estacionamiento.
void CalcularTiempoTranscurrido(int HoraEnt, int HoraSal, int MinEnt, int MinSal, int  &sumahora, int &sumaminutos);

#endif // HORA_H_INCLUDED
