/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion 🤓
 * @version 0.1
 * @date 2026-03-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>


// Declaraciones de funciones

/// @brief Suma dos numeros enteros
/// @param num1 Primer entero
/// @param num2 Segundo entero
/// @return La suma de los dos numeros
int suma(int num1, int num2);

/// @brief Resta dos numeros enteros
/// @param num1 Primer numero
/// @param num2 Segundo numero
/// @return La resta de Primer numero menos el Segundo numero
int resta(int num1, int num2);

int main()
{
    int a, b, c;
    a = 7;
    b = 8;
    c = suma(a,b);

    printf("Suma: %i\nResta: %i\n", c, resta(a,b));
    
    return 0;
}


// Definiciones
int suma(int num1, int num2) {
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int resta(int num1, int num2){
    return num1 - num2;
}