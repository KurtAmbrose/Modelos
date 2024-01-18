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

void generar_Tabla(float (*f)(float), float x0, float xf, float h, char archivo[]);
void graficar_Linea_1(float x0, float xf, char archivo[]);
void graficar_Linea_2(float x0, float xf, char archivo1[], char archivo2[]);
