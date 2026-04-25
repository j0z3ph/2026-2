/**
 * @file calloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas memoria dinamica
 * @version 0.1
 * @date 2026-04-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    arr = (int *)calloc(10, sizeof(int));
    
    for (int i = 0; i < 10; i++)
    {
        printf("%p - %i\n", (arr + i), *(arr + i));
    }
    

    return 0;
}
