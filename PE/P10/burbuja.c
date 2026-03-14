/**
 * @file burbuja.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Algoritmo de la burbuja
 * @version 0.1
 * @date 2026-03-13
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

    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        arrg[i] = (rand() %50) + 1;
    }

    // Imprimimos el original
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arrg[i]);
    }
    printf("\n");
    
    // Ordenamos por burbuja
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = 0; i < N - 1 - j; i++)
        {
            if(arrg[i] > arrg[i + 1]) {
                arrg[i] = arrg[i] + arrg[i + 1];
                arrg[i +1] = arrg[i] - arrg[i + 1];
                arrg[i] = arrg[i] - arrg[i + 1];
            }
        }
    }
    
    // Imprimimos el arreglo ordenado
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arrg[i]);
    }



    return 0;
}
