#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <stdio.h>

typedef struct{int _hora;
			   int minutos;} Hora;

void CargarHora(Hora &h);
void MostrarHora(Hora h);
int DarHora(Hora h);
int DarMinutos(Hora h);
void CalcularTiempoTranscurrido(int HoraEnt, int HoraSal, int MinEnt, int MinSal, int  &sumahora, int &sumaminutos);

#endif // HORA_H_INCLUDED
