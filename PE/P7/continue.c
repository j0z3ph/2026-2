/**
 * @file continue.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de continue
 * @version 0.1
 * @date 2026-02-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if((i&1) == 1) continue;
        printf("%i\n", i);
    }
    
    return 0;
}
