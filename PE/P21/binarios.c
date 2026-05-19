/**
 * @file binarios.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Binarios
 * @version 0.1
 * @date 2026-05-18
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int a = 10;
    FILE *archi = fopen("archi.bin", "wb");
    if (archi == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fwrite(&a, sizeof(int), 1, archi);


    fclose(archi);

    return 0;
}
