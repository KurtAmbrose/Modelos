/**
 * @file euler1.c
 * 
 * @brief Este es el archivo principal que se empleará para la gráfica de la función de y´ = y - t^2 + 1
 * 
 * @details El programa solicita al usuario la ecuación que se solucionará con euler, siempre y cuando sea de grado 1, y hará un archivo de texto donde se va a imprimir la gráfica.
 * 
 * @author Programa elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 21 de Febrero del 2024
 * 
 * @date Última actualización: 22 de Febrero del 2024 
*/

#include "funciones.h"
#include "edo.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Función principal
*/

int main(void)
{
    float a, b, y0, h;
    char opc;

    system("clear");

    //SE INGRESAN LOS DATOS 
    printf("\n-> Ingresa el valor inicial de 't': ");
    scanf("%f" , &a);
    printf("-> Ingresa el valor final de 't': ");
    scanf("%f" , &b);
    printf("-> Ingresa el valor de 'y(0)': ");
    scanf("%f" , &y0);
    printf("-> Ingresa el valor de h: ");
    scanf("%f", &h);

    do
    {
        system("clear");
        printf("-> a) Actividad 3\n-> b) Actividad 4\n");
        printf("\n\t* Ingresa una opción: ");
        scanf(" %c", &opc);
        switch (opc)
        {
            case 'a':
            imprimirTablaPantalla(a, b, y0, h, actividad3Real, actividad3Euler);
            break;

            case 'b':
            imprimirTablaPantalla(a, b, y0, h, actividad4Real, actividad4Euler);
            break;
            
            default:
            system("clear");
            printf("INGRESA UNA OPCIÓN VÁLIDA\n\n");
            break;
        }
    } while (opc != 'a' && opc != 'b');
    
    

    return 0;
}