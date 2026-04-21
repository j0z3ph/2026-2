/**
 * @file punteros1.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con punteros
 * @version 0.1
 * @date 2026-04-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    char a = 10;
    char *ptr;
    ptr = &a;

    printf("%i - %p\n", a, &a);
    printf("%p - %p - %i\n", ptr, &ptr, *ptr);
    *ptr = 11;
    printf("%p - %p - %i\n", ptr, &ptr, *ptr);
    printf("%i - %p\n", a, &a);
    printf("%p - %p\n", ptr, ptr + 1);

    return 0;
}
