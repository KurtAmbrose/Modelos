/**
 *@file funciones.c
 *
 *@brief Módulo donde estará desarrollados las funciones que se enviarán como parámetro para la función que genera la gráficaxs
 *
 *@author Elaborado por Diego Bravo Pérez
 *
 *@date Elaborado el día 15 de Enero del 2023
 *
 *@date Última actualización 15 de Enero del 2023
 *
 */

/** Parte pública */

float funcion_1(float x);

/** Parte privada */

#include <math.h>

float funcion_1(float x)
{
  return (0.25 * pow(x, 3) -4) / x;
}
