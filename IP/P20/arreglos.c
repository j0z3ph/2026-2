/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con arreglos
 * @version 0.1
 * @date 2026-04-21
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int arr[5] = {1,5,3,4,5};

    printf("%p - %p\n", arr, &arr);
    printf("%p - %i\n", arr, *arr);
    printf("%p - %i\n", arr + 1, *(arr + 1));
    printf("%p - %i\n", arr + 3, *(arr + 3));
    
    
    return 0;
}
