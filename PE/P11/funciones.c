/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion
 * @version 0.1
 * @date 2026-03-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

// Aqui van las declaraciones

/// @brief Suma dos numero con punto decimal
/// @param num1 Al primer numero a sumar
/// @param num2 El segundo numero a sumar
/// @return La suma de num1 y num2
float suma(float num1, float num2);

/// @brief Resta dos numeros
/// @param num1 El primer numero
/// @param num2 El segundo numero
/// @return La resta de num1 menos num2
float resta(float num1, float num2);

int main()
{
    float a = 8.0f;// variable 1
    float b = 6.0f;// variable 2
    float c = suma(a,b);

    printf("%f - %f\n", c, resta(a,b));
    
    return 0;
}

// Aqui van las definiciones de funciones

float suma(float num1, float num2) {
    float resultado;
    resultado = num1 + num2;

    return resultado;
}


float resta(float num1, float num2) {
    return num1 - num2;
}