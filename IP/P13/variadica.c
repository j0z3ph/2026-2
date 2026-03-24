/**
 * @file variadica.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion variadica
 * @version 0.1
 * @date 2026-03-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdarg.h>

int suma(int ene, ...) {
    va_list lista;
    int sum = 0;
    va_start(lista, ene);
    for (int i = 0; i < ene; i++)
    {
        sum += va_arg(lista, int);
    }
    va_end(lista);
    return sum;
}

int main()
{
    printf("%i\n", suma(8,1,2,3,4,5,6,7,8));
    
    return 0;
}
