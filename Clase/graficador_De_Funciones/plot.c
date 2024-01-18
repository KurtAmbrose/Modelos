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

void generar_Tabla(float (*f)(float), float x0, float xf, float h, char archivo[]);
void graficar_Linea_1(float x0, float xf, char archivo[]);
void graficar_Linea_2(float x0, float xf, char archivo1[], char archivo2[]);

/** PARTE PRIVADA */

#include <stdio.h>
#include <stdlib.h>

//Apuntador a una función: float (*f)(float)

/**
                            ^     ^     ^
			    |     |     |
			    |     |     |
			    |     |     Parámetro y tipo de dato
			    |     |
			    |     Apuntador a la función
			    |
		 tipo de dato que devuelve
 */

void generar_Tabla(float (*f)(float), float x0, float xf, float h, char archivo[])
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

void graficar_Linea_1(float x0, float xf, char archivo[])
{
  FILE *fp;

  fp = popen("gnuplot -persistent", "w"); //Abre Gnuplot

  if(!fp)
    {
      fprintf(stderr, "Error al abrir el pipe a gnuplot");
      exit(1);
    }

  //Configurar aspecto de la gráfica
  
  fprintf(fp, "set title 'Mi primera gráfica :D'\n");
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

void graficar_Linea_2(float x0, float xf, char archivo1[], char archivo2[])
{
  FILE *fp;

  fp = popen("gnuplot -persistent", "w"); //Abre Gnuplot

  if(!fp)
    {
      fprintf(stderr, "Error al abrir el pipe a gnuplot");
      exit(1);
    }

  //Configurar aspecto de la gráfica
  
  fprintf(fp, "set title 'Mi primera gráfica :D'\n");
  fprintf(fp, "set xlabel 'Eje X'\n");
  fprintf(fp, "set ylabel 'Eje Y'\n");
  fprintf(fp, "set xzeroaxis lt -1 lw 1\n");
  fprintf(fp, "set yzeroaxis\n");
  fprintf(fp, "set xrange[%.2f:%.2f]\n", x0, xf);
  fprintf(fp, "set yrange[-20:20]\n");
  
  // Grafica las funciones desde el archivo de datos

  fprintf(fp, "plot '%s' with linespoints title 'F1'\n", archivo1);
  fprintf(fp, "replot '%s' with linespoints title 'F2'\n", archivo2);

  // Cierra la tubería

  pclose(fp);
  
  return;
}
