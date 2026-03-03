/**
 * @file arreglo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer arreglo XD
 * @version 0.1
 * @date 2026-03-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main()
{
    int arreglo[5];
    int arr2[5] = {1,2,3,4,5};
    int arr3[] = {1,2,3,4,5};

    //arreglo[0] = 1;
    arreglo[1] = 2;
    arreglo[2] = 3;
    arreglo[3] = 4;
    arreglo[4] = 5;
    arreglo[5] = 6;
    
    for (int i = 1; i <= 5; i++)
    {
        printf("%i ", arreglo[i]);
    }

    printf("\n");
    
    arreglo[5000] = 666;
    printf("%i\n", arreglo[5000]);


    return 0;
}
