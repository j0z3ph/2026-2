/**
 * @file biblioteca.h
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Encabezado
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#ifndef __BIBLIOTECA_H__
#define __BIBLIOTECA_H__

#define TAMANIO 10

/// @brief Esta funcion cuenta
/// @param ene Hasta ene
void cuenta(int ene);

/// @brief Rellena un arreglo con numeros pseudoaleatorios
/// @param arr El arreglo
void generar(int arr[TAMANIO]);

/// @brief Imprime un arreglo
/// @param arr El arreglo
void imprime(int arr[]);

#endif