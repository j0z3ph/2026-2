/**
 * @file biblioteca.h
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi biblioteca de funciones
 * @version 0.2
 * @date 2026-04-15
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#ifndef __BIBLIOTECA_H__
#define __BIBLIOTECA_H__

int determinanT(int matrix[3][3]);

void transpuesta(int matrix[3][3], int trans[3][3]);

void adjuntA(int trans[3][3], int adjunta[3][3]);

#endif