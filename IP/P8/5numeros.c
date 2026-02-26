/**
 * @file 5numeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario 5 numeros y devuelve el promedio
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
    float promedio;

    for (int i = 0; i < 5; i++)
    {
        printf("Usuario, ingresa un numero: ");
        scanf("%i", &numero);
        suma += numero;
    }

    promedio = (float)suma / 5.0f;

    printf("El promedio es %.2f\n", promedio);
    
    return 0;
}
