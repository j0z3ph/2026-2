/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer while 🥳
 * @version 0.1
 * @date 2026-02-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int contador = 1; // 1. Variable con un valor inicial
    
    while (contador <= 100000) // 2. Una condicion que involucra la variable 
    {
        printf("%i\n", contador++); // 3. Un mecanismo con el cual variamos la variable para que eventualmente la condicion se haga falsa
    }
    
    
    
    
    return 0;
}
