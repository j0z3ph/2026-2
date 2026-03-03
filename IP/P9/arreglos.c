/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer arreglo 😈
 * @version 0.1
 * @date 2026-03-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<stdio.h>

int main()
{
    int arreglo[5];
    int arr2[5] = {1,2,3,4,5};
    int arr3[] = {1,2,3,4,5};

    arreglo[0] = 1;
    arreglo[1] = 2;
    arreglo[2] = 3;
    arreglo[3] = 4;
    arreglo[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arreglo[i]);
    }
    printf("\n");
    
    arreglo[1000] = 666;
    printf("%i\n", arreglo[1000]);
    
    return 0;
}
