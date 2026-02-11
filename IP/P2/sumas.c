/**
 * @file sumas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Este programa pide al usuario dos numeros
 * enteros y devuelve el resultado de la suma
 * @version 0.1
 * @date 2026-02-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int primer_numero;
    int segundo_numero;

    printf("Usuario, ingrese un numero: ");
    scanf("%i", &primer_numero);

    printf("Usuario, ingrese otro numero: ");
    scanf("%i", &segundo_numero);
    
    printf("La suma de %d y %i es %d",primer_numero, segundo_numero, primer_numero + segundo_numero);

    return 0;
}
