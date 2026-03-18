/**
 * @file adjunta.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Adjunta
 * @version 0.1
 * @date 2026-03-17
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

    adjunta[0][0] = +1 * (matrix[1][1]*matrix[2][2] - matrix[2][1]*matrix[1][2]);
    adjunta[0][1] = -1 * (matrix[1][0]*matrix[2][2] - matrix[2][0]*matrix[1][2]);
    adjunta[0][2] = +1 * (matrix[1][0]*matrix[2][1] - matrix[2][0]*matrix[1][1]);
    adjunta[1][0] = -1 * (matrix[0][1]*matrix[2][2] - matrix[2][1]*matrix[0][2]);
    adjunta[1][1] = +1 * (matrix[0][0]*matrix[2][2] - matrix[2][0]*matrix[0][2]);
    adjunta[1][2] = -1 * (matrix[0][0]*matrix[2][1] - matrix[2][0]*matrix[0][1]);
    adjunta[2][0] = +1 * (matrix[0][1]*matrix[1][2] - matrix[1][1]*matrix[0][2]);
    adjunta[2][1] = -1 * (matrix[0][0]*matrix[1][2] - matrix[0][2]*matrix[1][0]);
    adjunta[2][2] = +1 * (matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", adjunta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
