/**
 * @file funciones.c
 * 
 * @brief Este archivo contiene las funcones solución de la ecuación diferencial. Uno es por eular y el otro por ruge-kutta
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 2 de Marzo del 2024
 * 
 * @date Última actualización: 2 de Marzo del 2024
*/

//PARTE PÚBLICA

float euler(float t, float w, float h);

/**
 * @brief Función que devuelve el resultado de la edo por Euler de la actividad 1
 * @param Float: t
 * @param Float: w
 * @param Float: h
 * @author Diego Bravo Pérez
*/

float rugenKutta(float t, float w, float h);

/**
 * @brief Función que devuelve el resultado de la edo por Rugen-Kutta de la actividad 1
 * @param Float: t
 * @param Float: w
 * @param Float: h
 * @author Diego Bravo Pérez
*/

float euler2(float t, float w, float h);

/**
 * @brief Función que devuelve el resultado de la edo por Euler de la actividad 2
 * @param Float: t
 * @param Float: w
 * @param Float: h
 * @author Diego Bravo Pérez
*/

float rugenKutta2(float t, float w, float h);
/**
 * @brief Función que devuelve el resultado de la edo por Rugen-Kutta de la actividad 2
 * @param Float: t
 * @param Float: w
 * @param Float: h
 * @author Diego Bravo Pérez
*/

//PARTE PRIVADA

#include <math.h>

float euler(float t, float w, float h)
{
    return (w + h * (2 * cos(t)) * w);
}

float rugenKutta(float t, float w, float h)
{
    float k[4];

    k[0] = 2 * cos(t) * w;
    k[1] = 2 * cos(t + (h/2)) * (w + ((k[0] * h) / 2));
    k[2] = 2 * cos(t + (h/2)) * (w + ((k[1] * h) / 2));
    k[3] = 2 * cos(t + h) * (w + (k[2] * h));

    return (w + (1.0 / 6.0) * h * (k[0] + 2 * k[1] + 2 * k[2] + k[3]));
}

float euler2(float t, float w, float h)
{
    return (w + h * (w * (10 - (2 * w))));
}

float rugenKutta2(float t, float w, float h)
{
    float k[4];

    k[0] = w * (10 - (2 * w));
    k[1] = (w + (h * (k[0] / 2))) * (10 - (2 * (w + (h * (k[0] / 2)))));
    k[2] = (w + (h * (k[1] / 2))) * (10 - (2 * (w + (h * (k[1] / 2)))));
    k[3] = (w + (h * k[2])) * (10 - (2 * (w + (h * k[2]))));

    return (w + ((h / 6.0) * (k[0] + (2 * k[1]) + (2 * k[2]) + k[3])));
}