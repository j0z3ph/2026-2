/**
 * @file adjunta.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Adjunta
 * @version 0.1
 * @date 2026-03-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3}, 
                        {4,5,6}, 
                        {7,8,9}};
    int adjunta[3][3];

    adjunta[0][0] = +1 * (matrix[1][1]*matrix[2][2] - matrix[2][1] * matrix[1][2]);
    adjunta[0][1] = -1 * (matrix[1][0]*matrix[2][2] - matrix[2][0] * matrix[1][2]);
    adjunta[0][2] = +1 * (matrix[1][0]*matrix[2][1] - matrix[2][0] * matrix[1][1]);
    adjunta[1][0] = -1 * (matrix[0][1]*matrix[2][2] - matrix[2][1] * matrix[0][2]);
    adjunta[1][1] = +1 * (matrix[0][0]*matrix[2][2] - matrix[2][0] * matrix[0][2]);
    adjunta[1][2] = -1 * (matrix[0][0]*matrix[2][1] - matrix[2][0] * matrix[0][1]);
    adjunta[2][0] = +1 * (matrix[0][1]*matrix[1][2] - matrix[1][1] * matrix[0][2]);
    adjunta[2][1] = -1 * (matrix[0][0]*matrix[1][2] - matrix[1][0] * matrix[0][2]);
    adjunta[2][2] = +1 * (matrix[0][0]*matrix[1][1] - matrix[1][0] * matrix[0][1]);

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", adjunta[fila][columna]);
        }
        printf("\n");
    }
    
    return 0;
}
