/**
 * @file punterofuncion.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-05-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main()
{
    int (*la_suma)(int a, int b);
    la_suma = suma;
    printf("%p - %p\n", suma, la_suma);
    printf("%i\n", la_suma(5,6));
    
    return 0;
}
