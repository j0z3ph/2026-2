/**
 * @file arreglo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-04-29
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Arreglo de punteros
    int *arr[4];

    for (int i = 0; i < 4; i++)
    {
        arr[i] = malloc(sizeof(int) * 4);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", *(arr + i));
    }
    
    for (int i = 0; i < 4; i++)
    {
        free(arr[i]);
    }
    
    
    return 0;
}
