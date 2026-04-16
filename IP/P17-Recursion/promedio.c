/**
 * @file promedio.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula el promedio de n numeros
 * @version 0.1
 * @date 2026-03-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

void pedir_datos(int arreglo[], int ene) {
    static int i = 0;
    if ( i < ene)
    {
        printf("Usuario, ingresa un valor: ");
        scanf("%i", &arreglo[i]);
        i++;
        pedir_datos(arreglo, ene);
    }
}


int main()
{
    int ene;
    int suma = 0;
    float promedio;

    printf("Usuario, ingresa la cantidad de numeros a promediar: ");
    scanf("%i", &ene);

    if(ene < 1) {
        printf("Eres tonoto o te haces? 🤬\n");
        return 1;
    }

    int arreglo[ene];

    pedir_datos(arreglo, ene);

    // Sumarlos
    for (int i = 0; i < ene; i++)
    {
        suma += arreglo[i];
    }

    // Promedio
    promedio = (float)suma / (float)ene;

    // Imprimimos resultado
    printf("El promedio es: %.2f\n", promedio);
    
    return 0;
}
