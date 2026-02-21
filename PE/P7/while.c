/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer ciclo while :>
 * @version 0.1
 * @date 2026-02-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int contador = 1;// 1. Variable con un valor inicial
    while(contador <= 1000) // 2. Una condicion que eventualmente se hara falsa 
    {
        printf("%i\n", contador++); // 3. Un mecanismo con el cual la condicion se hara falsa
    }
    return 0;
}
