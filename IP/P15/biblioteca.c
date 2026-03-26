/**
 * @file biblioteca.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Codigo fuente de la biblioteca
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

long factorial(long n) {
    if(n == 0) return 1;
    else return n * factorial(n-1);
}

void cuenta(int ene) {
    static int i = 1;
    if ( i <= ene)
    {
        printf("%i ", i);
        i++;
        cuenta(ene);
    }
}

void rellenar(int arr[TAMANIO]) {
    // Rellenamos
    static int i = 0;
    if ( i < TAMANIO)
    {
        arr[i] = (rand()%((TAMANIO * 2)+1)) - TAMANIO;
        i++;
        rellenar(arr);
    }
}

void imprime(int arr[]) {
    // Imprimo
    static int i = 0;
    if ( i < TAMANIO)
    {
        printf("%i ", arr[i]);
        i++;
        imprime(arr);
    }
    
}

