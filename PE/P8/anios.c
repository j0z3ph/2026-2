/**
 * @file anios.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que recibe dias y los convierte en anios, meses y dias
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
    int anios, meses, dias;
    printf("Usuario, ingresa un numero de dias: ");
    scanf("%d", &numero);

    anios = numero / 365;
    numero %= 365;
    meses = numero / 30;
    dias = numero % 30;

    printf("%02i-%02i-%02i\n", anios, meses, dias);
    
    return 0;
}
