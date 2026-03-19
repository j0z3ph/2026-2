/**
 * @file inversa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Inversas
 * @version 0.1
 * @date 2026-03-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3}, {4,8,6}, {7,8,9}};
    int determinante;
    int trans[3][3];
    int adjunta[3][3];
    float inversa[3][3];
    float factor;

    determinante = (matrix[0][0]*matrix[1][1]*matrix[2][2]) +
                   (matrix[0][1]*matrix[1][2]*matrix[2][0]) +
                   (matrix[0][2]*matrix[1][0]*matrix[2][1]) -
                   (matrix[2][0]*matrix[1][1]*matrix[0][2]) -
                   (matrix[2][1]*matrix[1][2]*matrix[0][0]) -
                   (matrix[2][2]*matrix[1][0]*matrix[0][1]);

    if(determinante == 0) {
        printf("La matriz no tiene inversa 🤪\n");
        return 1;
    }

    factor = 1.0f / (float)determinante;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            trans[columna][fila] = matrix[fila][columna];
        }
    }

    adjunta[0][0] = +1 * (trans[1][1]*trans[2][2] - trans[2][1] * trans[1][2]);
    adjunta[0][1] = -1 * (trans[1][0]*trans[2][2] - trans[2][0] * trans[1][2]);
    adjunta[0][2] = +1 * (trans[1][0]*trans[2][1] - trans[2][0] * trans[1][1]);
    adjunta[1][0] = -1 * (trans[0][1]*trans[2][2] - trans[2][1] * trans[0][2]);
    adjunta[1][1] = +1 * (trans[0][0]*trans[2][2] - trans[2][0] * trans[0][2]);
    adjunta[1][2] = -1 * (trans[0][0]*trans[2][1] - trans[2][0] * trans[0][1]);
    adjunta[2][0] = +1 * (trans[0][1]*trans[1][2] - trans[1][1] * trans[0][2]);
    adjunta[2][1] = -1 * (trans[0][0]*trans[1][2] - trans[1][0] * trans[0][2]);
    adjunta[2][2] = +1 * (trans[0][0]*trans[1][1] - trans[1][0] * trans[0][1]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            inversa[i][j] = factor * (float)adjunta[i][j];
        }
    }
    
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%10.3f ", inversa[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
