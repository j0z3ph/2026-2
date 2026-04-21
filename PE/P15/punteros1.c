/**
 * @file punteros1.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con los punteros
 * @version 0.1
 * @date 2026-04-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int a = 10;
    int * ptr = &a;

    printf("%p - %p (%p) - %i\n", &a, ptr, &ptr, *ptr);
    *ptr = 51432;
    printf("%p - %p (%p) - %i\n", &a, ptr, &ptr, a);
    
    return 0;
}
