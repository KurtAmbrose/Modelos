/**
 * @file edo.c
 * 
 * @brief Este archivo contiene las funciones realcionadas a la generación de la tabla
 * 
 * @author Elaborado por: Diego Bravo Pérez
 * 
 * @date Elaborado el día: 24 de Febrero del 2024
 * 
 * @date Última actualización: 24 de Febrero del 2024
*/

//PARTE PÚBLICA

void generarTabla(float x0, float xf, float y0, float h, float (*f)(float, float, float));

/**
 * @brief Procedimiento que crea la tabla de soluciones
 * @param Float: x0
 * @param Float: xf
 * @param Float: y0
 * @param Float: h
 * @param Pointer: *f
 * @author Diego Bravo Pérez
*/