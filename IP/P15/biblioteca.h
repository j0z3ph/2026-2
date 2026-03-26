/**
 * @file biblioteca.h
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Archivo de encabezado
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#ifndef __BIBLIOTECA_H__
#define __BIBLIOTECA_H__
#define TAMANIO 10

/// @brief Calcula el factorial
/// @param n El numero al que deseamos calcular el facto
/// @return Factos
long factorial(long n);

/// @brief Cuenta
/// @param ene hasta ene
void cuenta(int ene);

/// @brief Rellena un arreglo con numero pseudoaleatorios
/// @param arr El arreglo a rellenar
void rellenar(int arr[TAMANIO]);

/// @brief Imprime un arreglo
/// @param arr El arreglo a imprimir
void imprime(int arr[]);

#endif