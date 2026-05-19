/**
 * @file archivos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer archivo XD
 * @version 0.1
 * @date 2026-05-18
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    char buffer[100];
    int a = 56;
    FILE *archi = fopen("archivo.txt", "w");
    if (archi == NULL)
    {
        printf("No se pudo abrir el archivo 🤣\n");
        return 1;
    }

    fprintf(archi, "%i", a);

    // while (!feof(archi))
    // {
    //     //fputc(fgetc(archi), stdout);
    //     fgets(buffer, 100, archi);
    //     fputs(buffer, stdout);
    // }

    // fflush(archi);

    fclose(archi);

    return 0;
}
