/**
 * @file sumadigitos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que suma los digitos de un numero entero positivo
 * @version 0.1
 * @date 2026-02-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int numero;
    int suma = 0;

    printf("Usuario, ingresa un numero: ");
    scanf("%d", &numero);

    while(numero > 0) {
        suma += (numero % 10);
        numero /= 10;
    }

    printf("La suma es: %i\n", suma);

    return 0;
}
