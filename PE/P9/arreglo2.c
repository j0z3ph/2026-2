/**
 * @file arreglo2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
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
    int arreglo[10];

    srand(time(NULL));
 
    for (int i = 0; i < 10; i++)
    {
        arreglo[i] = (rand()%11) + 10;
        //printf("%i\n", (rand()%11) + 10);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", arreglo[i]);
    }
   
    printf("\n");

    return 0;
}
