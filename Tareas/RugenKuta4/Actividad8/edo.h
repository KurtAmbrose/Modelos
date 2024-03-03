/**
 * @file edo.c
 * 
 * @brief Este archivo contiene las funciones relcionadas a la cración de las tablas a graficar
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 2 de Marzo del 2024
 * 
 * @date Última actualización: 2 de Marzo del 2024
*/

//PARTE PÚBLICA

void crearTabla(float a, float b, float y0, float h, float (*f)(float, float, float), char archivo[]);

/**
 * @brief Procedimiento que crea la Tabla de la solución
 * @param Float: a
 * @param Float: b
 * @param Float: y0
 * @param Float: h
 * @param Pointer: *f
 * @param Character: archivo[]
 * @author Diego Bravo Pérez
*/