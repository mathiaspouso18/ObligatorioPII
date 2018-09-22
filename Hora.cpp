#include "Hora.h"

//Hora valida de 8 a 22. Minutos de 0 a 59
void CargarHora(Hora &h)
{
    int hora, minutos;

    printf("Ingrese la hora: ");
    scanf("%d", hora);

    while(hora < 8 && hora > 22)
    {
        printf("La hora debe estar entre 8 y 22");
        scanf("%d", hora);
    }
    h.hora = hora;

    printf("Ingrese los minutos: ");
    scanf("%d", minutos);
    while(minutos < 0 && minutos > 59)
    {
        printf("Los minutos deben estar entre 0 y 59");
        scanf("%d", minutos);
    }
    h.minutos = minutos;
}
void MostarHora(Hora h)
{
    printf("%d:%d", h.hora, h.minutos);
}
int DarHora(Hora h)
{
    return h.hora;
}
int DarMinutos(Hora h)
{
    return h.minutos;
}
