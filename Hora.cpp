#include "Hora.h"

//Hora valida de 8 a 22. Minutos de 0 a 59
void CargarHora(Hora &h)
{
    int _hora, minutos;

    printf("\t\tIngrese la hora: ");
    scanf("%d", _hora);

    while(_hora < 8 && _hora > 22)
    {
        printf("\t\tLa hora debe estar entre 8 y 22");
        scanf("%d", _hora);
    }
    h._hora = _hora;

    printf("\t\tIngrese los minutos: ");
    scanf("%d", minutos);
    while(minutos < 0 && minutos > 59)
    {
        printf("\t\tLos minutos deben estar entre 0 y 59");
        scanf("%d", minutos);
    }
    h.minutos = minutos;
}
void MostrarHora(Hora h)
{
    printf("%d:%d", h._hora, h.minutos);
}
int DarHora(Hora h)
{
    return h._hora;
}
int DarMinutos(Hora h)
{
    return h.minutos;
}
