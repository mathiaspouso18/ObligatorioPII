#include "Hora.h"

void CargarHora(Hora &h)
{
    int _hora, minutos;

    printf("\t\tIngrese hora: ");
    scanf("%d", &_hora);

    while(_hora < 8 || _hora > 22)
    {
        printf("\t\tLa hora debe estar entre 8 y 22; Ingrese nuevamente: ");
        scanf("%d", &_hora);
    }
    h._hora = _hora;

    printf("\t\tIngrese minutos: ");
    scanf("%d", &minutos);
    while(minutos < 0 || minutos > 59)
    {
        printf("\t\tLos minutos deben estar entre 0 y 59; Ingrese nuevamente: ");
        scanf("%d", &minutos);
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

void CalcularTiempoTranscurrido(int HoraEnt, int HoraSal, int MinEnt, int MinSal, int  &sumahora, int &sumaminutos)
{
    int _horaTotal = 0, _minTotal = 0, difAHora = 0;

    //Si las horas son IGUALES, solo resto los minutos ya que la diferencia de hora va a ser 0.
    //SIEMPRE CONSIDERO COMO OBVIO QUE LA HORA DE SALIDA NO VA A SER MENOR A LA DE ENTRADA
    if(HoraEnt == HoraSal)
    {
        _minTotal = MinSal - MinEnt;
    }
    else
    {
        _horaTotal = HoraSal - HoraEnt;

        //Si las horas son DISTINTAS evalúo.
        //SIEMPRE CONSIDERO COMO OBVIO QUE LA HORA DE SALIDA NO VA A SER //MENOR A LA DE ENTRADA
        if(MinEnt > MinSal)
        {
            //Veo cuánto falta para completar la hora.
            //Luego a eso le sumo lo que falta para llegar de 0 a los minutos de salida.
            difAHora = 60 - MinEnt;
            _minTotal = difAHora + MinSal;
            _horaTotal = _horaTotal - 1;
        }
        else if(MinEnt < MinSal)
        {
            _minTotal = MinSal - MinEnt;
        }
    }

    sumahora = _horaTotal;
    sumaminutos = _minTotal;
}

