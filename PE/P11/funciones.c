/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion
 * @version 0.1
 * @date 2026-03-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include "biblioteca1tv2.h"


int main()
{
    float a = 8.0f;// variable 1
    float b = 6.0f;// variable 2
    float c = suma(a,b);

    printf("%f - %f\n", c, resta(a,b));
    
    return 0;
}

