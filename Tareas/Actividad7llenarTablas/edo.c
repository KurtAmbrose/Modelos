/**
 * @file edo.c
 * 
 * @brief Este archivo contiene el procedimiento para poder resolver mediante el método de euler, la función creada. Además, este archivo ayud ade igual manera a la creación de la tabla en un archivo txt 
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 22 de Febrero del 2024
 * 
 * @date Última actualización: 22 de Febrero del 2024
*/

//PARTE PÚBLICA

void imprimirTablaPantalla(float a, float b, float y0, float paso, float (*r)(float), float (*e)(float, float, float));

/**
 * @brief Procedimiento que imprime en pantalla la tabla con los valores de x, yReal, yEuler y sus márgenes de error.
 * @param Float: a
 * @param Float: b
 * @param Float: y0
 * @param Float: paso
 * @param Integer: n
 * @param Pointer: *r
 * @param Pointer: *e
 * @author Diego Bravo Pérez
 * @date 22 de Febrero del 2024
*/

//PARTE PRIVADA

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirTablaPantalla(float a, float b, float y0, float paso, float (*r)(float), float (*e)(float, float, float))
{
    float x, yReal, yEuler;
    int i, n;

    //INICIALIZAMOS 'X' Y 'Y' EN 'X0' Y 'Y0'
    x = a;
    yReal = y0;
    yEuler = y0;

    //INICIALIZAMOS LAS ITERACIONES

    n = (b-a)/paso;

    printf("|    X       |   Y real   |  Y euler   |  Error absoluto |   Error porcentual rel |\n-----------------------------------------------------------------------------------\n");

    for(i=0; i <= n; i++)
    {
        printf("|   %.4f   |   %.4f   |   %.4f   |   %.4f        |    %.2f                |\n", x, yReal, yEuler, fabsf(yReal - yEuler), 100 * ((yReal - yEuler) / yReal));

        x += paso;
        yReal = r(x);
        yEuler = e(x, yEuler, paso);

    }
    printf("-----------------------------------------------------------------------------------\n\n");
}