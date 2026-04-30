/**
 * @file arreglo2.c
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
    // Puntero a arreglo
    int (*arr)[4];

    arr = malloc(sizeof(int) * 16);

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", arr + i);
    }
    
    free(arr);
    
    
    return 0;
}
