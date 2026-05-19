/**
 * @file archivos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa con archivos
 * @version 0.1
 * @date 2026-05-18
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int a = 0;
    float b;
    char buffer[100];
    FILE *archi = fopen("archi.txt", "r");
    if (archi == NULL)
    {
        printf("No se pudo abrir el archivo 🫢\n");
        return 1;
    }

    // fputc(64, archi);
    // fputs("Hola Mundo!!\n", archi);
    // fprintf(archi, "%i\n", a);

    // while (!feof(archi))
    // {
    //     //putc(fgetc(archi), stdout);
    //     //fgets(buffer, 100, archi);
    //     //fputs(buffer, stdout);
    // }
    // fflush(archi);


    fscanf(archi, "%i-%f", &a, &b);
    printf("%i %f\n", a, b);

    fclose(archi);

    return 0;
}
