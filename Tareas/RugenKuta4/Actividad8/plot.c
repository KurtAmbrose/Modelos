/**
 * @file plot.c
 * 
 * @brief Este archivo contiene las funciones relacionadas con la elaboración de la curva por gnuplot
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 2 de marzo del 2024
 * 
 * @date Última actualización: 2 de marzo del 2024
*/

//PARTE PÚBLICA

void graficarFunciones(float x0, float xf, char archivo1[], char archivo2[]);

/**
 * @brief Procedimiento que grafica las tablas en gnuplot
 * @param Float: x0
 * @param Float: xf
 * @param String: archivo1[]
 * @param String: archivo2[]
 * @author Diego Bravo Pérez
*/

//PARTE PRIVADA

#include <stdio.h>
#include <stdlib.h>

void graficarFunciones(float x0, float xf, char archivo1[], char archivo2[])
{
  FILE *fp;

  fp = popen("gnuplot -persistent", "w"); //Abre Gnuplot

  if(!fp)
    {
      fprintf(stderr, "Error al abrir el pipe a gnuplot");
      exit(1);
    }

  //Configurar aspecto de la gráfica
  
  fprintf(fp, "set title 'Tarea Ruge-Kutta'\n");
  fprintf(fp, "set xlabel 'Eje X'\n");
  fprintf(fp, "set ylabel 'Eje Y'\n");
  fprintf(fp, "set xzeroaxis lt -1 lw 1\n");
  fprintf(fp, "set yzeroaxis\n");
  fprintf(fp, "set xrange[%.2f:%.2f]\n", x0, xf);
  fprintf(fp, "set yrange[0:10]\n");
  
  // Grafica las funciones desde el archivo de datos

  fprintf(fp, "plot '%s' with linespoints title 'F1'\n", archivo1);
  fprintf(fp, "replot '%s' with linespoints title 'F1'\n", archivo2);

  // Cierra la tubería

  pclose(fp);
  
  return;
}