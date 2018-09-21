#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
#include "Auto.h"
#include "Camioneta.h"
#include "TipoVehiculo.h"
#include "Hora.h"


typedef struct{String matricula;
                String departamento;
                long int CI;
                Hora horaIng;
                TipoVehiculo tipoV;
                union{Auto a;
                      Camioneta c;
                    } Datos;

}Vehiculo;



#endif // VEHICULO_H_INCLUDED
