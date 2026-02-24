/**
 * @file break.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de break
 * @version 0.1
 * @date 2026-02-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int numero = 5;

    int contador = numero;
    while (1) {
        contador--;
        if(contador < 1) break;
        numero = numero * contador;
        //printf("%d\n", contador);
    }
    
    printf("%i\n", numero);
    return 0;
}
