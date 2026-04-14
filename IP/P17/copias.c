/**
 * @file copias.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Copias
 * @version 0.1
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char cadena1[11] = "Hola";
    //char cadena2[11] = cadena1;
    char cadena2[11];

    //strcpy(cadena2, cadena1);
    int i = -1;
    do
    {
        i++;
        cadena2[i] = cadena1[i];
    }while ( cadena1[i] != '\0');

    printf("%s\n%s\n", cadena1, cadena2);
    
    return 0;
}
