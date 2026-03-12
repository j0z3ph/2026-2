/**
 * @file matrixes.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer matriz :>
 * @version 0.1
 * @date 2026-03-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};*/

    int matrix[3][3];
    srand(time(NULL));

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            matrix[fila][columna] = (rand() % 11) + 10;
        }
    }


    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", matrix[fila][columna]);
        }
        printf("\n");
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%i ", matrix[0][i]);
    }
    
    
    
    return 0;
}
