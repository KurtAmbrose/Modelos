/**
 * @file main.c
 * 
 * @brief Este programa realiza tablas sobre distintas funciones que se resuelven por EUler 
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día 24 de Febrero del 2024
 * 
 * @date Última actualización: 24 de Febrero del 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "edo.h"

int main(void)
{
    float x0, y0, xf, h, **funcion;
    char opc;

    printf("\n\n-> Ingresa el valor de x0, xf y y0: ");
    scanf("%f %f %f", &x0, &xf, &y0);
    printf("-> Ingresa el valor de h: ");
    scanf("%f", &h);

    do
    {
        printf("\n-> a) Actividad 2\n-> b) Actividad 6\n-> c) Actividad 7\n-> d) Actividad 8\n-> e) Actividad 5\n");
        printf("\n\n\t* Ingresa una opción: ");
        scanf(" %c", &opc);
        switch(opc)
        {
            case 'a':
            generarTabla(x0, xf, y0, h, actividad2);
            break;

            case 'b':
            generarTabla(x0, xf, y0, h, actividad6);
            break;

            case 'c':
            generarTabla(x0, xf, y0, h, actividad7);
            break;

            case 'd':
            generarTabla(x0, xf, y0, h, actividad8);
            break;

            case 'e':
            generarTabla(x0, xf, y0, h, actividad5);
            break;

            default:
            system("clear");
            printf("INGRESA UNA OPCIÓN VÁLIDA\n");
            break;
        }
    } while (opc != 'a' && opc != 'b' && opc != 'c' && opc != 'd' && opc != 'e');

    return 0;
}