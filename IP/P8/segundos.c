/**
 * @file segundos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que convierte segundos en HH:MM:SS
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
    int horas, minutos, segundos;

    printf("Usuario, ingresa los segundos: ");
    scanf("%i", &numero);

    horas = numero / 3600;
    numero %= 3600;
    minutos = numero / 60;
    segundos = numero % 60;
    
    printf("%02i:%02i:%02i\n", horas, minutos, segundos);

    return 0;
}
