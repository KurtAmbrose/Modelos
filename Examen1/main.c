/**
 *
 *@file main.c
 *
 *@brief Programa que grafica funciones del examen, que son 3
 *
 *@details El programa solicita los valores al usuario, luego genera la tabla y comienza a trazar las gráfica
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


int main(void)
{
  float x0, xf, h;
  int opc = 0;
  
    system("clear");

    printf("===============================================\n\tPRIMER EXÁMEN PARCIAL\n===============================================\n\n");

    do
      {
	printf("\n\n-> 1) Ejercicio 1\n");
	printf("-> 2) Ejercicio 2\n");
	printf("-> 3) Ejercicio 3\n");
	printf("-> 4) Salir\n\n");

	printf("\t* Ingresa una opción: ");

	scanf(" %d", &opc);

	switch(opc)
	  {
	  case 1:
	    system("clear");
	    printf("IMPORTANTE: Los valores de x0 y xf deben de existir dentro del dominio, y tienen que ser valores finitos");
	    printf("\n\n-> Ingresa el valor de la x inicial: ");
	    scanf(" %f", &x0);
	    printf("\n-> Ingresa el valor de la x final: ");
	    scanf(" %f", &xf);
	    printf("\n-> Ingresa el valor de h: ");
	    scanf(" %f", &h);

	    printf("x inicial: %.2f, x final: %.2f, h: %.2f\n\n", x0, xf, h);
	    generarTabla(funcion1, x0, xf, h, "ejercicio1.txt");
	    graficarFuncion(x0, xf, "ejercicio1.txt");
	    break;
	    
	  case 2:
	    system("clear");
	    printf("IMPORTANTE: Los valores de x0 y xf deben de existir dentro del dominio, y tienen que ser valores finitos");
	    printf("\n\n-> Ingresa el valor de la x inicial: ");
	    scanf(" %f", &x0);
	    printf("\n-> Ingresa el valor de la x final: ");
	    scanf(" %f", &xf);
	    printf("\n-> Ingresa el valor de h: ");
	    scanf(" %f", &h);

	    printf("x inicial: %.2f, x final: %.2f, h: %.2f\n\n", x0, xf, h);
	    generarTabla(funcion2, x0, xf, h, "ejercicio2.txt");
	    graficarFuncion(x0, xf, "ejercicio2.txt");
	    break;

	  case 3:
	    system("clear");
	    printf("IMPORTANTE: Los valores de x0 y xf deben de existir dentro del dominio, y tienen que ser valores finitos");
	    printf("\n\n-> Ingresa el valor de la x inicial: ");
	    scanf(" %f", &x0);
	    printf("\n-> Ingresa el valor de la x final: ");
	    scanf(" %f", &xf);
	    printf("\n-> Ingresa el valor de h: ");
	    scanf(" %f", &h);

	    printf("x inicial: %.2f, x final: %.2f, h: %.2f\n\n", x0, xf, h);
	    generarTabla(funcion3, x0, xf, h, "ejercicio3.txt");
	    graficarFuncion(x0, xf, "ejercicio3.txt");
	    break;

	  case 4:
	    system("clear");
	    break;

	  default:
	    system("clear");
	    printf("Ingresa una opción válida"); 
	    break;
	  }
      }while(opc != 4);
  
  return 0;
}
