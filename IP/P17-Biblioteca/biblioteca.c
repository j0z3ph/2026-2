/**
 * @file biblioteca.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi biblioteca de funciones
 * @version 0.1
 * @date 2026-04-15
 * 
 * @copyright Copyright (c) 2026
 * 
 */

int determinanT(int matrix[3][3]) {
    int determinante = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
                   (matrix[1][0] * matrix[2][1] * matrix[0][2]) +
                   (matrix[2][0] * matrix[0][1] * matrix[1][2]) -
                   (matrix[2][0] * matrix[1][1] * matrix[0][2]) -
                   (matrix[0][0] * matrix[2][1] * matrix[1][2]) -
                   (matrix[1][0] * matrix[0][1] * matrix[2][2]);
    return determinante;
}


void transpuesta(int matrix[3][3], int trans[3][3]) {
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            trans[columna][fila] = matrix[fila][columna];
        }
    }
}


void adjuntA(int trans[3][3], int adjunta[3][3]) {
    adjunta[0][0] = +1 * (trans[1][1]*trans[2][2] - trans[2][1]*trans[1][2]);
    adjunta[0][1] = -1 * (trans[1][0]*trans[2][2] - trans[2][0]*trans[1][2]);
    adjunta[0][2] = +1 * (trans[1][0]*trans[2][1] - trans[2][0]*trans[1][1]);
    adjunta[1][0] = -1 * (trans[0][1]*trans[2][2] - trans[2][1]*trans[0][2]);
    adjunta[1][1] = +1 * (trans[0][0]*trans[2][2] - trans[2][0]*trans[0][2]);
    adjunta[1][2] = -1 * (trans[0][0]*trans[2][1] - trans[2][0]*trans[0][1]);
    adjunta[2][0] = +1 * (trans[0][1]*trans[1][2] - trans[1][1]*trans[0][2]);
    adjunta[2][1] = -1 * (trans[0][0]*trans[1][2] - trans[0][2]*trans[1][0]);
    adjunta[2][2] = +1 * (trans[0][0]*trans[1][1] - trans[0][1]*trans[1][0]);
}
