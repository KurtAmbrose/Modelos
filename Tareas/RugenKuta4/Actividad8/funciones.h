/**
 * @file funciones.c
 * 
 * @brief Este archivo contiene las funcones solución de la ecuación diferencial. Uno es por eular y el otro por ruge-kutta
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 2 de Marzo del 2024
 * 
 * @date Última actualización: 3 de Marzo del 2024
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