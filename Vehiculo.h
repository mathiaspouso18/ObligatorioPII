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

//Carga el struct de tipo Vehiculo.
void CrearVehiculo(Vehiculo &v, String mat);

//Dado un struct de tipo Vehiculo, lo muestra en pantalla.
void MostrarVehiculo(Vehiculo v);

//Dado un struct Vehiculo, devuelve la matricula.
void DarMatricula(Vehiculo v, String &mat);

//Devuelve la cedula del conductor del vehiculo.
long int DarCedula(Vehiculo v);

//Devuelve el struct de tipo hora del vehiculo.
Hora DarHoraIng(Vehiculo v);

//Devuelve el tipo de vehiculo, Auto o Camion.
TipoVehiculo DarTipoVehiculo(Vehiculo v);

//Devuelve el departamento donde esta matriculado el vehiculo.
void DarDepartamento(Vehiculo v, String &s);

//Devuelve la capacidad de carga del vehiculo tipo Camion.
long int DarCapacidadCarga(Vehiculo v);

//Devuelve el modelo del vehiculo.
void DarModelo(Vehiculo v, String &modelo);

//Devuelve la marca del vehiculo.
void DarMarca(Vehiculo v, String &s);

//Devuelve el año del vehiculo.
int DarAnio(Vehiculo v);



#endif // VEHICULO_H_INCLUDED
