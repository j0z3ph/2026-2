/**
 * @file prueba.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
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
    while(100) {
        int *a = (int*)malloc(sizeof(int));
        *a = 10;
        free(a);
    }
    
    return 0;
}
