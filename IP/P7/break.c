/**
 * @file break.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con breaks
 * @version 0.1
 * @date 2026-02-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int n = 5;
    int factos = 1;

    int i = n;
    for (;;)
    {
        factos = factos * i;
        //printf("%i ", i);
        i--;
        if(i < 1) break;
    }
    
    printf("El factorial es: %i\n", factos);
    
    return 0;
}
