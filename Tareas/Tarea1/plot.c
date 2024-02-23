/**
 * @file plot.c
 * 
 * @brief Este archivo contiene los procedimientos relacionados con el trazado de la gráfica
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 22 de Febrero del 2024
 * 
 * @date Última actualización: 22 de Febrero del 2024
*/

//PARTE PÚBLICA

void graficarFunciones(float a, float b, float y0, char real[], char euler[]);

/**
 * @brief Procedimiento que grafica las funciones en gnuplot
 * @param Float: a
 * @param Float: b
 * @param Float: y0
 * @param String: real
 * @param String: euler
 * @author Diego Bravo Pérez
 * @date 22 de Febrero del 2024
*/

//PARTE PRIVADA

#include <stdio.h>
#include <stdlib.h>

void graficarFunciones(float a, float b, float y0, char real[], char euler[])
{
    FILE *fp;

    fp = popen("gnuplot -persistent", "w"); //Abre Gnuplot

    if(!fp)
    {
      fprintf(stderr, "\nError al abrir gnuplot\n");
      exit(1);
    }

    //Configura aspecto de la gráfica
  
    fprintf(fp, "set title '%s'\n", "Tarea");
    fprintf(fp, "set xlabel 'Eje t'\n");
    fprintf(fp, "set ylabel 'Eje Y'\n");
    fprintf(fp, "set xzeroaxis lt -1 lw 1\n");
    fprintf(fp, "set yzeroaxis\n");
    fprintf(fp, "set xrange[%.2f:%.2f]\n", a, b);
    fprintf(fp, "set yrange[0:5]\n");

    // Grafica las funciones desde el archivo de datos

    fprintf(fp, "plot '%s' with linespoints title 'F1'\n", real);
    fprintf(fp, "replot '%s' with linespoints title 'F2'\n", euler);

    // Cierra la tubería

    pclose(fp);
}