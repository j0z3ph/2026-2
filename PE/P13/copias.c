/**
 * @file copias.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Copia una cadena en otra
 * @version 0.1
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char cadena1[N], cadena2[N];

    printf("Usuario, ingresa una cadena: ");
    fgets(cadena1, N, stdin);
    strcpy(cadena2, cadena1);
    printf("%s", cadena2);

    return 0;
}
