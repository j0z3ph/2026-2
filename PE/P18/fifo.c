/**
 * @file fifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief FIFO (cola)
 * @version 0.1
 * @date 2026-05-06
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools.h"

int main()
{
    char *menu[] = {"Agregar", "Eliminar", "Mostrar", "Salir"};
    int seleccion;
    int *arreglo = NULL;
    int tamanio = 0;
    int valor;

    do
    {
        seleccion = showMenu(4, menu, "FIFO");

        if (seleccion == 0)
        {
            // Agregar
            limpiarPantalla();
            printf("Ingresa el valor a agregar: ");
            scanf("%i", &valor);
            limpiaBuffer();

            if (arreglo == NULL)
            {
                // Lista esta vacia
                arreglo = malloc(sizeof(int));
            }
            else
            {
                // la lista ya tiene al menos un elmento
                arreglo = realloc(arreglo, sizeof(int) * (tamanio + 1));
            }
            arreglo[tamanio] = valor;
            tamanio++;
        }
        else if (seleccion == 1)
        {
            // Eliminar
            if (tamanio == 0)
            {
                printf("Lista vacia\n");
            }
            else
            {
                valor = arreglo[0]; // el primer elemento
                if (tamanio == 1)
                {
                    // Solo queda un elemento en el arreglo
                    free(arreglo);
                    arreglo = NULL;
                    tamanio = 0;
                }
                else
                {
                    // Hay al menos dos elementos en el arreglo
                    // Recorremos todos los elementos un espacio hacia atras
                    memcpy(arreglo, arreglo + 1, sizeof(int) * (tamanio - 1));

                    arreglo = realloc(arreglo, sizeof(int) * (tamanio - 1));
                    tamanio--;
                }
                printf("Elemento eliminado: %i\n", valor);
            }
        }
        else if (seleccion == 2)
        {
            // Mostrar
            limpiarPantalla();
            printf("[ ");
            for (int i = 0; i < tamanio; i++)
            {
                printf("%i ", arreglo[i]);
            }
            printf("]\n");
        }
        else
        {
            // Salir
            printf("Adios 💩\n");
        }

        if (seleccion != 3)
            pausa();

    } while (seleccion != 3);

    return 0;
}
