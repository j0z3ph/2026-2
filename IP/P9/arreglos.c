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
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    
    int arreglo[5];
    int arr2[5] = {1,2,3,4,5};
    int arr3[] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        arreglo[i] = rand()%31;
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arreglo[i]);
    }
    printf("\n");
    
    //arreglo[1000] = 666;
    //printf("%i\n", arreglo[1000]);
    
    return 0;
}
