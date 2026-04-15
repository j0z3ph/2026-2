/**
 * @file palabras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Cuenta palabras
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    char cadena[100];
    int cont = 0;
    int cont_espacios=0;
    printf("Usuario, ingresa una cadena: ");
    fgets(cadena, 100, stdin);

    while(cadena[cont] != '\0') {
        if(cadena[cont] == ' ' && cadena[cont-1] != ' ') {
            cont_espacios++;
        }
        cont++;
    }
    cont_espacios++;

    printf("Hay %i palabras.\n", cont_espacios);


    return 0;
}
