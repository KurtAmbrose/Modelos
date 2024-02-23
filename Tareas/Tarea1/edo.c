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

void generarTablaEuler(float a, float b, float y0, float paso, int n, float (*f)(float, float, float), char archivo[]);

/**
 * @brief Procedimiento que crea la tabla a graficar de euler
 * @param Float: a
 * @param Float: b
 * @param Float: y0
 * @param Float: paso
 * @param Integer: n
 * @param Pointer: *f
 * @param String: archivo
 * @author Diego Bravo Pérez
 * @date 22 de Febrero del 2023
*/

void generarTablaReal(float a, float b, float y0, float paso, int n, float (*f)(float), char archivo[]);

/**
 * @brief Procedimiento que crea la tabla a graficar de la ecuación analítica
 * @param Float: a
 * @param Float: b
 * @param Float: y0
 * @param Float: paso
 * @param Integer: n
 * @param Pointer: *f
 * @param String: archivo
 * @author Diego Bravo Pérez
 * @date 22 de Febrero del 2023
*/

void imprimirTablaPantalla(float a, float b, float y0, float paso, int n, float (*r)(float), float (*e)(float, float, float));

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

void generarTablaEuler(float a, float b, float y0, float paso, int n, float (*f)(float, float, float), char archivo[])
{
    float x, yEuler;
    int i;
    FILE *fp;

    //INICIALIZAMOS 'X' Y 'Y' EN 'X0' Y 'Y0'
    x = a;
    yEuler = y0;

    if((fp = fopen(archivo, "wt")) == NULL)
    {
        fprintf(stderr, "\n---------ARCHIVO NO DISPONIBLE---------\n\n");
        exit(1);
    }

    for(i=0; i <= n; i++)
    {
        fprintf(fp, "%f %f\n", x, yEuler);

        x += paso;

        yEuler = f(x, yEuler, paso);
    }

    fclose(fp);
}

void generarTablaReal(float a, float b, float y0, float paso, int n, float (*f)(float), char archivo[])
{
    float x, yReal;
    int i;
    FILE *fp;

    //INICIALIZAMOS 'X' Y 'Y' EN 'X0' Y 'Y0'
    x = a;
    yReal = y0;

    if((fp = fopen(archivo, "wt")) == NULL)
    {
        fprintf(stderr, "\n---------ARCHIVO NO DISPONIBLE---------\n\n");
        exit(1);
    }

    for(i=0; i <= n; i++)
    {
        fprintf(fp, "%f %f\n", x, yReal);

        x += paso;

        yReal = f(x);
    }

    fclose(fp);
}

void imprimirTablaPantalla(float a, float b, float y0, float paso, int n, float (*r)(float), float (*e)(float, float, float))
{
    float x, yReal, yEuler;
    int i;

    //INICIALIZAMOS 'X' Y 'Y' EN 'X0' Y 'Y0'
    x = a;
    yReal = y0;
    yEuler = y0;

    printf("|    X       |   Y real   |  Y euler   |  Error absoluto   |\n------------------------------------------------------------\n");

    for(i=0; i <= n; i++)
    {
        printf("|   %.4f   |   %.4f   |   %.4f   |   %.4f          |\n", x, yReal, yEuler, fabsf(yReal - yEuler));

        x += paso;

        yReal = r(x);
        yEuler = e(x, yEuler, paso);
    }
    printf("------------------------------------------------------------\n\n");
}