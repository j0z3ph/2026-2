/**
 * @file agenda.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Agenda de contactos
 * @version 0.1
 * @date 2026-05-12
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "tools.h"

typedef struct Contacto
{
    char nombre[100];
    char telefono[15];
    char apodo[100];
} Contacto;

typedef struct Agenda
{
    Contacto *lista;
    int tamanio;
} Agenda;

Agenda *nuevaAgenda()
{
    Agenda *agenda = malloc(sizeof(Agenda));
    agenda->lista = NULL;
    agenda->tamanio = 0;
    return agenda;
}

bool agregarContacto(Agenda *agenda, Contacto contacto)
{
    if (agenda != NULL)
    {
        if (agenda->lista == NULL)
        {
            // Lista esta vacia
            agenda->lista = malloc(sizeof(Contacto));
            if (agenda->lista == NULL)
                return false;
            agenda->lista[0] = contacto;
            agenda->tamanio = 1;
        }
        else
        {
            // Lista tiene al menos un elemento
            agenda->lista = realloc(agenda->lista, sizeof(Contacto) * (agenda->tamanio + 1));
            if (agenda->lista == NULL)
                return false;
            agenda->lista[agenda->tamanio] = contacto;
            agenda->tamanio++;
        }
        return true;
    }
    return false;
}

void listarContactos(Agenda *agenda)
{
    if (agenda == NULL)
    {
        printf("No tienes amigos 🤣\n");
    }
    else
    {
        if (agenda->lista == NULL)
        {
            printf("No tienes amigos 🤣\n");
        }
        else
        {
            for (size_t i = 0; i < agenda->tamanio; i++)
            {
                printf("%zu. %s (%s) %s\n", i + 1, agenda->lista[i].nombre, agenda->lista[i].apodo, agenda->lista[i].telefono);
            }
        }
    }
}

int seleccionarContacto(Agenda *agenda)
{
    if (agenda == NULL)
    {
        printf("No tienes amigos 🤣\n");
    }
    else
    {
        if (agenda->lista == NULL)
        {
            printf("No tienes amigos 🤣\n");
        }
        else
        {
            char *contactos[agenda->tamanio];

            for (size_t i = 0; i < agenda->tamanio; i++)
            {
                contactos[i] = agenda->lista[i].nombre;
            }

            return showMenu(agenda->tamanio, contactos, "Selecciona un Contacto");
        }
    }
    return -1;
}

bool eliminarContacto(Agenda *agenda, int idx)
{
    if (agenda == NULL)
    {
        printf("Que quieres borrar? Ni tienes amigos 😹\n");
        return false;
    }
    else
    {
        if (agenda->lista == NULL)
        {
            printf("Que quieres borrar? Ni tienes amigos 😹\n");
            return false;
        }
        else
        {
            if (agenda->tamanio == 1)
            {
                // Solo tenemos un contacto a eliminar
                free(agenda->lista);
                agenda->lista = NULL;
                agenda->tamanio = 0;
                return true;
            }
            else
            {
                // Hay al menos 2 contacto
                memcpy(agenda->lista + idx, agenda->lista + idx + 1, (agenda->tamanio - idx - 1) * sizeof(Contacto));
                agenda->lista = realloc(agenda->lista, (agenda->tamanio - 1) * sizeof(Contacto));
                agenda->tamanio--;
                return true;
            }
        }
    }
}

int main()
{
    Agenda *agenda = nuevaAgenda();
    char *menu[] = {"Agregar", "Listar", "Llamar", "Eliminar", "Salir"};
    int seleccion;
    Contacto tmp;

    do
    {
        seleccion = showMenu(5, menu, "Agenda de Contactos");

        if (seleccion == 0)
        {
            // Agregar contacto
            printf("Ingresa el nombre: ");
            fgets(tmp.nombre, 100, stdin);
            tmp.nombre[strlen(tmp.nombre) - 1] = '\0';
            printf("Ingresa el apodo: ");
            fgets(tmp.apodo, 100, stdin);
            tmp.apodo[strlen(tmp.apodo) - 1] = '\0';
            printf("Ingresa el telefono: ");
            fgets(tmp.telefono, 15, stdin);
            tmp.telefono[strlen(tmp.telefono) - 1] = '\0';

            agregarContacto(agenda, tmp);
        }
        else if (seleccion == 1)
        {
            // Listar contactos
            listarContactos(agenda);
        }
        else if (seleccion == 2)
        {
            // Llamar contacto
            int idx = seleccionarContacto(agenda);
            if (idx >= 0)
            {
                printf("Llamando a %s %s...\n", agenda->lista[idx].apodo, agenda->lista[idx].telefono);
            }
        }
        else if (seleccion == 3)
        {
            // Eliminar contacto
            int idx = seleccionarContacto(agenda);
            //if (idx >= 0)
            //{
                eliminarContacto(agenda, idx);
            //}
        }
        else
        {
            // Salir
        }
        if (seleccion != 4)
            pausa();

    } while (seleccion != 4);

    return 0;
}
