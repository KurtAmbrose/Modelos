/**
 *
 *@file main.c
 *
 *@brief Programa que grafica funciones que se desee en gnuplot
 *
 *@details El programa solicita los valores al usuario, luego genera la tabla y comienza a trazar la gráfica
 *
 *@author Elaborado por: Diego Bravo Pérez
 *
 *@date Elaborado el día 15 de Enero del 2023
 *
 *@date Última actualización: 15 de Enero del 2023
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "plot.h"


int main(int argc, char *argv[])
{
  float x0, xf, h;

  if(argc != 4)
    {
      fputs("Usage: graficar.out <x0> <xf> <h>\n", stderr);
      exit(1);
    }
  
    system("clear");

    printf("===============================================\n\tGENERADOR DE GRÁFICAS EN GNUPLOT\n===============================================\n\n");

    x0 = atof(argv[1]);
    xf = atof(argv[2]); //atof(); pasa datos de tipo string a float
    h = atof(argv[3]);

    printf("x0: %.2f, xf: %.2f, h: %.2f\n\n", x0, xf, h);

    //Genera las tablas
    generar_Tabla(funcion_1, x0, xf, h, "linea_1.txt");
    generar_Tabla(funcion_2, x0, xf, h, "linea_2.txt");

    //Grafica las tablas
    graficar_Linea_1(x0, xf, "linea_1.txt");
    graficar_Linea_2(x0, xf, "linea_1.txt", "linea_2.txt");
    
  
  return 0;
}
