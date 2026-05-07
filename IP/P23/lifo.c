/**
 * @file lifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief LIFO
 * @version 0.1
 * @date 2026-05-06
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

int main()
{
    char *menu[] = {"Agregar", "Eliminar", "Listar", "Salir"};
    int seleccion;
    int *arreglo = NULL;
    int tamanio = 0;
    int valor;

    do
    {
        seleccion = showMenu(4, menu, "LIFO");

        if (seleccion == 0)
        {
            // Agregar
            limpiarPantalla();
            printf("Ingresa un valor: ");
            scanf("%i", &valor);
            limpiaBuffer();

            if (arreglo == NULL)
            {
                // Lista vacia
                arreglo = malloc(sizeof(int));
            }
            else
            {
                // Lista con al menos un elemento
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
                valor = arreglo[tamanio - 1];
                if (tamanio == 1)
                {
                    // Queda un elemento
                    free(arreglo);
                    arreglo = NULL;
                    tamanio = 0;
                }
                else
                {
                    // Quedan al menos dos elementos
                    arreglo = realloc(arreglo, sizeof(int) * (tamanio - 1));
                    tamanio--;
                }
                printf("Elemento eliminado: %i\n", valor);
            }
        }
        else if (seleccion == 2)
        {
            // Listar
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
            printf("Adios tonoto 🫪\n");
        }

        if (seleccion != 3)
            pausa();

    } while (seleccion != 3);

    return 0;
}
