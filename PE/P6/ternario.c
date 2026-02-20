/**
 * @file ternario.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con operadores ternarios
 * @version 0.1
 * @date 2026-02-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int numero;
    printf("Usuario, ingresa un numero entero positivo: ");

    scanf("%d", &numero);

    printf("El numero es %s\n", 
        (numero & 1) == 0 ? "PAR" : "IMPAR");
    
    return 0;
}
