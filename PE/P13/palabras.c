/**
 * @file palabras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Cuenta palabras
 * @version 0.1
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    char cadena[100];
    int cuenta_espacios = 0;
    int idx = 0;
    char caracter_anterior = 0;
    printf("Usuario, ingresa una cadena: ");
    fgets(cadena, 100, stdin);

    while(cadena[idx] != '\0') {
        if(cadena[idx] == ' ' && caracter_anterior != ' ') {
            cuenta_espacios++;
        }
        caracter_anterior = cadena[idx];
        idx++;
    }
    cuenta_espacios++;
    printf("Hay %i palabras\n", cuenta_espacios);

    
    return 0;
}
