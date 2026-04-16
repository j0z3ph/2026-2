/**
 * @file inversa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Inversa
 * @version 0.1
 * @date 2026-03-17
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include "biblioteca.h"

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,10}};
    int determinante;
    int trans[3][3];
    int adjunta[3][3];
    float factor;
    float inversa[3][3];

    // Determinante
    determinante = determinanT(matrix);

    if(determinante == 0) {
        printf("La matriz no tiene inversa 🥲\n");
        return 1;
    }

    // 1/|A|
    factor = 1.0f / (float)determinante;
    
    // Traspuesta
    transpuesta(matrix, trans);

    // Adjunta
    adjuntA(trans, adjunta);

    // Inversa
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            inversa[i][j] = factor * (float)adjunta[i][j];
        }
    }
    
    // Imprimimos
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%10.3f ", inversa[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
