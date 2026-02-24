/**
 * @file enenumeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario ene numeros e imprime el promedio.
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
    int ene;
    float promedio;
    
    printf("Usuario, ingresa la cantidad de datos a promediar: ");
    scanf("%d", &ene);

    if(ene < 1) {
        printf("No seas tonoto 💩\n");
        return 1;
    }

    for (int i = 0; i < ene; i++)
    {
        printf("Usuario, ingresa un numero: ");
        scanf("%d", &numero);
        suma += numero;
    }

    promedio = (float)suma / (float)ene;

    printf("El promedio es: %f\n", promedio);
    
    return 0;
}
