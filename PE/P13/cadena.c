/**
 * @file arreglo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi no primer cadena
 * @version 0.1
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    char cadena[100] = "Hola Mundo";
    char otra[100] = cadena;

    // cadena[0] = 'H';
    // cadena[1] = 'o';
    // cadena[2] = 'l';
    // cadena[3] = 'a';
    cadena[4] = '\0';

    for (int i = 0; i < 100; i++)
    {
        printf("%c", otra[i]);
    }

    printf("\n%s", cadena);
    
    
    
    return 0;
}
