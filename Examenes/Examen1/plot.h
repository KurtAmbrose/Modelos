/**
 *@file plot.c
 *
 *@brief Este módulo contiene las funciones relacionadas a la creación de la tabla y trazado de la función a dibujar
 *
 *@author Elaborado por Diego Bravo Pérez
 *
 *@date Elaborado el día 15 de Enero del 2023
 *
 *@date Última actualización: 15 de Enero del 2023
 *
 */

/** PARTE PÚBLICA */

void generarTabla(float (*f)(float), float x0, float xf, float h, char archivo[]);

/**
 *@brief Función que genera los valores que se van a graficar posteriormente
 *@param Float: (*f)(float)
 *@param Float: x0
 *@param Float: xf
 *@param Float: h
 *@param String: archivo[]
 *@author Diego Bravo Pérez
 */

void graficarFuncion(float x0, float xf, char archivo[]);

/**
 *@brief Función que genera la gráfica vía gnuplot
 *@param Float: x0
 *@param Float: xf
 *@param String: archivo[]
 *@author Diego Bravo Pérez
 */
