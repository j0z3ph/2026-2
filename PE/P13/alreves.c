/**
 * @file alreves.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Palindromos?
 * @version 0.1
 * @date 2026-04-13
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>
#include <string.h>
#define N 100

int main(int argc, char const *argv[])
{
    char texto[N];
    int idx = 0;
    printf("Usuario, ingrese un texto: ");
    fgets(texto, N, stdin);

    // Buscamos el final de la cadena
    //while (texto[idx] != '\0') idx++;

    // Imprimimos al reves
    for (int i = strlen(texto); i >= 0; i--)
    {
        printf("%c", texto[i]);
    }

    return 0;
}
