/**
 * @file malloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Memoria dinamica
 * @version 0.1
 * @date 2026-04-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h> // Memoria dinamica

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int)*10);

    *ptr = 10;
    *(ptr + 1) = 11;

    printf("%p - %i\n", ptr, *ptr);
    printf("%p - %i\n", ptr+1, *(ptr+1));
    
    return 0;
}
