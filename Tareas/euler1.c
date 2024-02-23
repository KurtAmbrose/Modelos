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
#include "plot.h"
#include "edo.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

/**
 * @brief Función principal
*/

int main(void)
{
    float a, b, y0, paso;
    int n = 40;

    system("clear");

    printf("===================================\n\tMÉTODO DE EULER\n===================================\n\n");

    //SE INGRESAN LOS DATOS 
    printf("-> Ingresa el valor inicial de 't': ");
    scanf("%f" , &a);
    printf("-> Ingresa el valor final de 't': ");
    scanf("%f" , &b);
    printf("-> Ingresa el valor de 'y(0)': ");
    scanf("%f" , &y0);

    paso = (b-a) / n;

    //IMPRESIÓN PARA VERIFICAR SI LOS DATOS SE GUARDARON CON ÉXITO
    printf("\n\t* Dominio: %.2f <= t <= %.2f\n", a, b);
    printf("\t* Valor de y inicial: %.2f\n\t* Paso: %.2f\n\n", y0, paso);

    //IMPRIME LA TABLA EN PANTALLA Y GENERA LOS DOS ARCHIVOS DE TEXTO PARA LA GRÁFICA
    generarTablaEuler(a, b, y0, paso, n, euler, "euler.txt");
    generarTablaReal(a, b, y0, paso, n, real, "real.txt");
    imprimirTablaPantalla(a, b, y0, paso, n, real, euler);

    //SE DIBUJA LA TABLA
    graficarFunciones(a, b, y0, "real.txt", "euler.txt");

    return 0;
}