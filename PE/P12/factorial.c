/**
 * @file factorial.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Factos
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;
    else return n * factorial(n-1);
}


int main()
{
    printf("%u\n", factorial(20));
    
    return 0;
}
