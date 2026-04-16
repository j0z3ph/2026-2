/**
 * @file orden.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ordena letras
 * @version 0.1
 * @date 2026-04-15
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100];
    int idx = 0;
    printf("Usuario, ingresa una cadena: ");
    fgets(texto, 100, stdin);


    for (int j = 0; j < strlen(texto) - 1; j++)
    {
        for (int i = 0; i < strlen(texto) - 1 - j; i++)
        {
            if(texto[i] > texto[i + 1]) {
                // Intercambia
                int c = texto[i];
                texto[i] = texto[i + 1];
                texto[i + 1] = c;
            }
        }
    }

    printf("%s", texto);
    
    return 0;
}
