/**
 * @file tilin.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-04-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1) {
        int * a = malloc(sizeof(int));
        *a = 10;
        free(a);
    }
    return 0;
}
