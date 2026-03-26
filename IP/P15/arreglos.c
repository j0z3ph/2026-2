/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Imprime arreglos
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

    rellenar(arr);
    imprime(arr);

    return 0;
}
