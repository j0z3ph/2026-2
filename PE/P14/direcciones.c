/**
 * @file direcciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con punteros
 * @version 0.1
 * @date 2026-04-15
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int a = 10;
    int * ptr;
    ptr = &a;

    printf("%i - %p\n", a, &a);
    printf("%p - %p\n", ptr, &ptr);
    
    return 0;
}
