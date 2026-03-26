/**
 * @file biblioteca.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Codigo fuente
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void cuenta(int ene) {
    static int i = 1;
    if ( i <= ene)
    {
        printf("%i ", i);
        i++;
        cuenta(ene);
    }
}


void generar(int arr[TAMANIO]){
    // Generar
    static int i = 0;
    if ( i < TAMANIO)
    {
        arr[i] = rand()%(TAMANIO*2);
        i++;
        generar(arr);
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
