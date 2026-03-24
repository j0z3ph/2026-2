/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion 🤓
 * @version 0.1
 * @date 2026-03-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include "biblioteca.h"

int main()
{
    int a, b, c;
    a = 7;
    b = 8;
    c = suma(a,b);

    printf("Suma: %i\nResta: %i\n", c, resta(a,b));
    
    return 0;
}

