/**
 * @file funciones.c
 * 
 * @brief Este archivo recopila las funciones relacionadas a la lectura y procesamiento de la función que se le solicitan al usuario
 * 
 * @author Diego Bravo Pérez
 * 
 * @date Elaborado el día: 21 de Febrero del 2024
 * 
 * @date Última actualización: 22 de Febrero del 2024
*/

//PARTE PÚBLICA 

float euler(float t, float w, float h);

/**
 * @brief Función que devuelve un valor de real y contiene una operación para resolver por euler
 * @param Float: t
 * @param Float: w
 * @param Float: h
 * @return la solución de la ecuación
 * @author Diego Bravo Pérez
 */

float real(float t);

/**
 * @brief Función que devuelve un valor real y contiene una operación para resolver analíticamente
 * @param Float: t
 * @return la solución de la ecuación
 * @author Diego Bravo Pérez
*/

//PARTE PRIVADA 

#include <math.h>

float euler(float t, float w, float h)
{
    return (w + h * (w - pow(t, 2) + 1));
}

float real(float t)
{
    return (pow(t, 2) + 2 * t + 1 - ((exp(t))/2.0));
}
