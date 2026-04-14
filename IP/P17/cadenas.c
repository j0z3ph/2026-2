/**
 * @file cadenas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer cadena
 * @version 0.1
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    char cadena[100] = "Hola";

    // cadena[0] = 'H';
    // cadena[1] = 'o';
    // cadena[2] = 'l';
    // cadena[3] = 'a';
    // cadena[4] = '\0';
    
    for (int i = 0; i < 100; i++)
    {
        printf("%c", cadena[i]);
    }

    printf("\n%s\n", cadena);
    
    
    return 0;
}
