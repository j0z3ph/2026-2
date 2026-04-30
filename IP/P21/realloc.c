/**
 * @file realloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Realocando
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
    int *arr = malloc(sizeof(int) * 10);
    printf("%p\n", arr);

    arr = realloc(arr, sizeof(int) * 100);
    printf("%p\n", arr);
    
    return 0;
}
