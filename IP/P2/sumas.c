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
    float primer_numero;
    float segundo_numero;

    printf("Usuario, ingrese un numero: ");
    scanf("%f", &primer_numero);

    printf("Usuario, ingrese otro numero: ");
    scanf("%f", &segundo_numero);
    
    printf("% .2f\n% .2f\n", primer_numero, segundo_numero);
    //printf("La suma de %+015.0f y %f es %f\n",primer_numero, segundo_numero, primer_numero + segundo_numero);

    return 0;
}
