/**
 * @file 5numeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario 5 numeros e imprime el promedio.
 * @version 0.1
 * @date 2026-02-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int suma = 0;
    int numero;
    float promedio;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Usuario, ingresa un numero: ");
        scanf("%d", &numero);
        suma += numero;
    }

    promedio = (float)suma / 5.0f;

    printf("El promedio es: %f\n", promedio);
    
    return 0;
}
