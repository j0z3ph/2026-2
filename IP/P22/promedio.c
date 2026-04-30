/**
 * @file promedio.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2026-04-29
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *datos = NULL;
    int tamanio = 0;
    char entrada[15];
    int suma = 0;
    float promedio;

    do
    {
        printf("Usuario, ingresa un entero o punto (.) para terminar: ");
        fgets(entrada, 15, stdin);

        if (entrada[0] != '.')
        {
            // Es un numero
            if (datos == NULL)
            {
                // Arreglo nuevecito
                datos = malloc(sizeof(int));
            }
            else
            {
                // Arreglo usadito
                datos = realloc(datos, sizeof(int) * (tamanio + 1));
            }
            if (datos == NULL)
            {
                printf("Upsss, syntax error\n");
                return 1;
            }
            datos[tamanio] = atoi(entrada);
            tamanio++;
        }
    } while (entrada[0] != '.');

    printf("[ ");
    for (int i = 0; i < tamanio; i++)
    {
        printf("%i ", datos[i]);
        suma += datos[i];
    }
    printf("]\n");

    promedio = (float)suma / (float)tamanio;

    printf("El promedio es %0.2f\n", promedio);

    return 0;
}
