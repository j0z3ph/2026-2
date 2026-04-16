/**
 * @file sumas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-04-15
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int suma = 0;
    if(argc > 1) {
        for (int i = 1; i < argc; i++)
        {
            suma = suma + atoi(argv[i]);
        }
        
    }
    return suma;
}
