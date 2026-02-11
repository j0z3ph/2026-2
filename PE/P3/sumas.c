/**
 * @file sumas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Este programa solicita al usuario dos numeros enteros y devuelve el resultado de la suma
 * @version 0.1
 * @date 2026-02-11
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

    printf("Ahora, ingrese un segundo numero: ");
    scanf("%i", &segundo_numero);

    printf("El resultado de sumar %d y %i es %i\n", primer_numero, segundo_numero, primer_numero + segundo_numero);

    
    return 0;
}
