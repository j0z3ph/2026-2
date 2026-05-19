/**
 * @file binario.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-05-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    int a = 56;
    FILE * archi = fopen("archivo.bin", "wb");

    fwrite(&a, sizeof(int), 1, archi);

    fclose(archi);
    
    return 0;
}
