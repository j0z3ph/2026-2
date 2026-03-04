/**
 * @file enenumeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide N numeros y los promedia, usando arreglos
 * @version 0.1
 * @date 2026-03-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int ene;
    int suma = 0;
    float promedio;

    printf("Usuario, ingresa la cantidad de elementos a promediar: ");
    scanf("%i", &ene);

    if(ene < 1) {
        printf("Acaso estas tonoto? 💩");
        return 1;
    }

    int arreglo[ene];

    for (int i = 0; i < ene; i++)
    {
        printf("Usuario, ingresa un numero: ");
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < ene; i++)
    {
        suma += arreglo[i];
    }

    promedio = (float)suma / (float)ene;
    
    printf("El promedio es: %.2f\n", promedio);
    
    return 0;
}
