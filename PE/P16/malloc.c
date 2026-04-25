/**
 * @file malloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Memoria dinamica 
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
    int *ptr;

    ptr = (int *)malloc(sizeof(int) * 10);
    
    // for (int i = 0; i < 10; i++)
    // {
    //     ptr[i] = i+1;
    // }
    

    for (int i = 0; i < 10; i++)
    {
        printf("%p - %i\n", (ptr + i), *(ptr + i));
    }
    
    
    


    return 0;
}
