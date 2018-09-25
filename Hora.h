#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <stdio.h>

typedef struct{int _hora;
			   int minutos;} Hora;

void CargarHora(Hora &h);
void MostrarHora(Hora h);
int DarHora(Hora h);
int DarMinutos(Hora h);
void calculohora(int horaE, int horaS, int minutosE, int minutosS,int  &sumahora, int &sumaminutos);

#endif // HORA_H_INCLUDED
