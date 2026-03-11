/**
 * @file burbuja.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer burburja
 * @version 0.1
 * @date 2026-03-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000

int main()
{
    int arrg[N];
    int c;

    srand(time(NULL));

    // Inicializo el arreglo 
    for (int i = 0; i < N; i++)
    {
        arrg[i] = (rand()%101) + 100;
    }

    // Imprimo
    for (size_t i = 0; i < N; i++)
    {
        printf("%i ", arrg[i]);
    }
    printf("\n");

    // Ordenamos por el algoritmo de la burbuja
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = 0; i < N - 1 - j; i++)
        {
            if(arrg[i] > arrg[i + 1]) {
                // Intercambia
                c = arrg[i];
                arrg[i] = arrg[i + 1];
                arrg[i + 1] = c;
            }
        }
    }
    
    // Imprimo
    for (size_t i = 0; i < N; i++)
    {
        printf("%i ", arrg[i]);
    }
    printf("\n");
    
    return 0;
}
