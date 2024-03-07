/**
 * @file rugeKutta.c
 * 
 * @brief Este programa está hecho para graficar la solución de una ecuación diferencial por el método de Rugen-Kutta. Compara este resultado con el de Euler.
 * 
 * @author Elaborado por: Diego Bravo Pérez 
 * 
 * @date Elaborado por: 2 de Marzo de 2024
 * 
 * @date Última actualización: 3 de Marzo de 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "edo.h"
#include "plot.h"

int main(void)
{
    float x0, y0, xf, paso;
    char opc;

    system("clear");

    printf("=========================================================\n\tMÉTODO DE RUGE-KUTTA\n=========================================================\n\n");

    printf("-> Ingresa el valor de x0: ");
    scanf("%f", &x0);
    printf("-> Ingresa el valor de xf: ");
    scanf("%f", &xf);
    printf("-> Ingresa el valor de y(0): ");
    scanf("%f", &y0);
    printf("-> Ingresa el valor del paso: ");
    scanf("%f", &paso);
    printf("\nx0: %.2f\nxf: %.2f\ny0: %.2f\nh: %.2f\n\n", x0, xf, y0, paso);

    do
    {
        system("clear");
        printf("-> a) Actividad 1\n-> b) Actividad 2\n\n");
        printf("* Ingresa una opción: ");
        scanf(" %c", &opc);

        switch (opc)
        {
            case 'a':
                crearTabla(x0, xf, y0, paso, euler, "euler.txt");
                crearTabla(x0, xf, y0, paso, rugenKutta, "rk4.txt");
                graficarFunciones(x0, xf, "euler.txt", "rk4.txt");
                break;

            case 'b':
                crearTabla(x0, xf, y0, paso, euler2, "euler.txt");
                crearTabla(x0, xf, y0, paso, rugenKutta2, "rk4.txt");
                graficarFunciones(x0, xf, "euler.txt", "rk4.txt");
                break;
            
            default:
                system("clear");
                printf("INGRESA UNA OPCIÓN VÁLIDA.\n\n");
                break;
        }
    } while (opc != 'a' && opc != 'b');

    return 0;
}