/**
 * @file arreglo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Imprime el contenido de un arreglo usando recursion
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"


int main()
{
    srand(time(NULL));
    int arr[TAMANIO];

    generar(arr);
    imprime(arr);
    
    return 0;
}
