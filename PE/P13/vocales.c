/**
 * @file vocales.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Determina las consonantes y las vocales
 * @version 0.1
 * @date 2026-04-13
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int vocales = 0, consonantes = 0;
    int idx = 0;
    char cadena[100];

    printf("Usuario, ingresa una cadena: ");
    fgets(cadena, 100, stdin);

    // Primero convertimos a minusculas
    while (cadena[idx] != '\0')
    {
        if (cadena[idx] >= 65 && cadena[idx] <= 90)
        {
            // Una mayuscula
            cadena[idx] += 32;
        }
        idx++;
    }

    // Contamos vocales y consonantes
    idx = 0;
    while (cadena[idx] != '\0')
    {
        if (cadena[idx] == 'a' ||
            cadena[idx] == 'e' ||
            cadena[idx] == 'i' ||
            cadena[idx] == 'o' ||
            cadena[idx] == 'u')
        {
            vocales++;
        }
        else if (cadena[idx] >= 97 && cadena[idx] <= 122)
        {
            consonantes++;
        }
        idx++;
    }

    printf("Total vocales: %i\nTotal consonantes: %i\n", vocales, consonantes);

    return 0;
}
