#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <stdio.h>

typedef struct{int hora;
			   int minutos;} Hora;

void CargarHora(Hora &h);
void MostarHora(Hora h);
int DarHora(Hora h);
int DarMinutos(Hora h);

#endif // HORA_H_INCLUDED
