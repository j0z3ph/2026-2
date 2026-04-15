/**
 * @file ordenar.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ordena
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
    char cadena[100];
    int tamanio;
    printf("Usuario, ingresa una cadena: ");
    fgets(cadena, 100, stdin);

    tamanio = strlen(cadena);


    // Ordenamos por burbuja
    for (int j = 0; j < tamanio - 1; j++)
    {
        for (int i = 0; i < tamanio - 1 - j; i++)
        {
            if(cadena[i] > cadena[i + 1]) {
                cadena[i] = cadena[i] + cadena[i + 1];
                cadena[i +1] = cadena[i] - cadena[i + 1];
                cadena[i] = cadena[i] - cadena[i + 1];
            }
        }
    }

    printf("%s", cadena);
    
    
    return 0;
}

