/**
 * @file arreglos_ptrs.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Arreglos?
 * @version 0.1
 * @date 2026-04-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int arr[5] = {1,2,100,4,5};

    printf("%p - %p\n", arr, &arr);
    printf("%p - %i\n", arr, *arr);
    printf("%p - %i\n", arr + 1, *(arr + 1));
    printf("%p - %i\n", arr + 2, *(arr + 2));
    printf("%p - %i\n", arr + 3, *(arr + 3));
    printf("%p - %i\n", arr + 4, *(arr + 4));
    
    return 0;
}
