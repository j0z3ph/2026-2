/**
 * @file elmasgrande.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Encuentra el numero mas grande
 * @version 0.1
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int buscaElMasGrande(int arr[TAMANIO]) {
    static int theBigOne = INT32_MIN;
    static int i = 0;
    if ( i < TAMANIO)
    {
        if(arr[i] > theBigOne) {
            theBigOne = arr[i];
        }
        i++;
        return buscaElMasGrande(arr);
    }
    return theBigOne;
}

int main()
{
    srand(time(NULL));
    int arr[TAMANIO];
    int theBigOne;
    
    // llenamos el arreglo
    rellenar(arr);
    imprime(arr);  

    // Buscamos al mas grande
    theBigOne = buscaElMasGrande(arr);

    // Imprimimos resultados
    printf("\nEl mas grande es: %i\n", theBigOne);
    
    return 0;
}
