/**
 * @file trans.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief La trans-puesta 🏳️‍⚧️
 * @version 0.1
 * @date 2026-03-17
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int trans[3][3];

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            trans[columna][fila] = matrix[fila][columna];
        }
    }
    
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", trans[fila][columna]);
        }
        printf("\n");
    }

    
    return 0;
}
