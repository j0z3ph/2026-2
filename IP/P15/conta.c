/**
 * @file conta.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Contador
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include "biblioteca.h"

int main()
{
    int ene;
    printf("Usuario, ingresa un valor: ");
    scanf("%i", &ene);

    cuenta(ene);
    
    return 0;
}
