/**
 * @file rugeKutta.c 
 *
 * @brief Este programa resuelve una ecuación diferencial por el método de Rugen-Kutta y compara con la solución real, además de que realiza la gráfica de ambas ecuaciones
 *
 * @author Elaborado por: Diego Bravo Pérez
 *
 * @date Elaborado el día: 26 de Febrero del 2024
 *
 * @date Última actualización: 26 de Febrero del 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcion.c"
#include "edo.c"
#include "plot.c"

/**
 * @brief FUnción principal
*/

int main(int argc char *argv[])
{
	float x0, xf, y0, h;

	if(argc != 4)
	{
		fprintf(stderr, "Usage: ./rugenKutta.out <x0> <xf> <y0>\n");
		exit(1);
	}

	x0 = atof(argv[1]);
	xf = atof(argv[2]);
	y0 = atof(argv[3]);
	
	h = 0.05;

	system("clear");

	printf("==========================\n\tMÉTODO DE RUGEN-KUTTA\n==========================\n\n");
}
