/**
 * @file enenumeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario ene numeros y devuelve el promedio
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
    int ene;

    printf("Usuario, ingresa la cantidad de numeros a promediar: ");
    scanf("%d", &ene);

    for (int i = 0; i < ene; i++)
    {
        printf("Usuario, ingresa un numero: ");
        scanf("%i", &numero);
        suma += numero;
    }

    promedio = (float)suma / (float)ene;

    printf("El promedio es %.2f\n", promedio);
    
    return 0;
}
