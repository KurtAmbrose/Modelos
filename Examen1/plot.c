/**
 *  
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

/** PARTE PRIVADA */

#include <stdio.h>
#include <stdlib.h>

void generarTabla(float (*f)(float), float x0, float xf, float h, char archivo[])
{
  int iteraciones, i;
  float x = x0;
  FILE *fp;

  iteraciones = (xf - x0) / h;

  //Abre el archivo y valida si existe

  if((fp = fopen(archivo, "wt")) == NULL)
    {
      fputs("EL archivo no existe", stderr);
      exit(1);
    }

  for(i=0; i<=iteraciones; i++)
    {
      fprintf(fp, "%f %f\n", x, f(x));
      
      x += h;
    }

  //Se cierra el archivo
  fclose(fp);
  
  
  return;
}

void graficarFuncion(float x0, float xf, char archivo[])
{
  FILE *fp;

  fp = popen("gnuplot -persistent", "w"); //Abre Gnuplot

  if(!fp)
    {
      fprintf(stderr, "Error al abrir el pipe a gnuplot");
      exit(1);
    }

  //Configura aspecto de la gráfica
  
  fprintf(fp, "set title '%s'\n", archivo);
  fprintf(fp, "set xlabel 'Eje X'\n");
  fprintf(fp, "set ylabel 'Eje Y'\n");
  fprintf(fp, "set xzeroaxis lt -1 lw 1\n");
  fprintf(fp, "set yzeroaxis\n");
  fprintf(fp, "set xrange[%.2f:%.2f]\n", x0, xf);
  fprintf(fp, "set yrange[-20:20]\n");
  
  // Grafica las funciones desde el archivo de datos

  fprintf(fp, "plot '%s' with linespoints title 'F1'\n", archivo);

  // Cierra la tubería

  pclose(fp);
  
  
  return;
}
