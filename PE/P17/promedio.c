/**
 * @file promedio.h
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
    int *arreglo = NULL;
    int tamanio = 0;
    int suma = 0;
    float promedio;
    char entrada[12];

    do
    {

        printf("Usuario, ingresa un numero entero o punto (.) para terminar: ");
        fgets(entrada, 12, stdin);

        if (entrada[0] != '.')
        {
            // Suponemos es un numero
            if (arreglo == NULL)
            {
                // La lista esta vacia
                arreglo = malloc(sizeof(int));
            }
            else
            {
                // Ya tenemos elementos, expandimos
                arreglo = realloc(arreglo, sizeof(int) * (tamanio + 1));
            }

            if (arreglo == NULL)
            {
                printf("Upss, no se pudo reservar mas memoria 😢\n");
                return 1;
            }

            arreglo[tamanio] = atoi(entrada);
            tamanio++;
        }

    } while (entrada[0] != '.');


    printf("[ ");
    for (int i = 0; i < tamanio; i++)
    {
        printf("%i ", arreglo[i]);
        suma += arreglo[i];
    }
    printf("]\n");

    // Calculamos el promedio
    promedio = (float)suma / (float)tamanio;

    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
