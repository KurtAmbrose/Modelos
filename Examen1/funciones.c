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

float funcion1(float x);

/**
 * @brief Función que devuelve un valor de tipo float con una operación que realiza
 * @details La operación a realizar es (-3 * exp(pow(x, 4))/ (exp(x)))
 * @param Float: x
 * @return El resultado de la operación: (-3 * exp(pow(x, 4))/ (exp(x)))
 * @author Diego Bravo Pérez
*/

float funcion2(float x);

/**
 * @brief Función que devuelve un valor de tipo float con una operación que realiza
 * @details La operación a realizar es (9 * pow(x,4) + 4 * pow(x,3) + 12) / (12 * pow(x,2))
 * @param Float: x
 * @return El resultado de la operación: (9 * pow(x,4) + 4 * pow(x,3) + 12) / (12 * pow(x,2))
 * @author Diego Bravo Pérez
*/

float funcion3(float x);

/**
 * @brief Función que devuelve un valor de tipo float con una operación que realiza
 * @details La operación a realizar es (x + 1)/(x * exp(3 * x))
 * @param Float: x
 * @return El resultado de la operación: (x + 1)/(x * exp(3 * x))
 * @author Diego Bravo Pérez
*/

/** Parte privada */

#include <math.h>

float funcion1(float x)
{
  return (-3 * exp(pow(x, 4))/ (exp(x)));
}

float funcion2(float x)
{
  return (9 * pow(x,4) + 4 * pow(x,3) + 12) / (12 * pow(x,2));
}

float funcion3(float x)
{
  return (x + 1)/(x * exp(3 * x));
}
