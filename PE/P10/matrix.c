/**
 * @file matrix.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Matrices
 * @version 0.1
 * @date 2026-03-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int m[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    //m[0][0] = 1;
    //m[0][1] = 2;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", m[fila][columna]);
        }
        printf("\n");
    }
    
    
    return 0;
}
