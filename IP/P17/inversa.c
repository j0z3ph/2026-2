/**
 * @file inversa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Imprime al reves
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];
    int cont = 0;
    printf("Usuario, ingresa una cadena: ");
    fgets(cadena, 100, stdin);

    // Buscamos el final de la cadena
    //while(cadena[cont] != '\0') cont++;
    cont = strlen(cadena);

    for (int i = cont; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
    
    return 0;
}
