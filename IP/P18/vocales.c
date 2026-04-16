/**
 * @file vocales.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2026-04-15
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    char cadena[100];
    int vocales = 0, consonantes = 0;
    int idx = 0;
    printf("Usuario, ingresa una cadena: ");
    fgets(cadena, 100, stdin);

    // Convertimos a minusculas
    while (cadena[idx] != '\0')
    {
        if (cadena[idx] >= 65 && cadena[idx] <= 90)
        {
            // letra mayuscula
            cadena[idx] += 32;
        }
        idx++;
    }
    idx = 0;
    // Contamos
    while (cadena[idx] != '\0')
    {
        if (cadena[idx] == 'a' ||
            cadena[idx] == 'e' ||
            cadena[idx] == 'i' ||
            cadena[idx] == 'o' ||
            cadena[idx] == 'u') {
                vocales++;
            } else if(cadena[idx] >= 97 &&
            cadena[idx] <= 122) {
                consonantes++;
            }
            idx++;
    }

    printf("Hay %i vocales y %i consonantes.\n", vocales, consonantes);

    return 0;
}
