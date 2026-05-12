/**
 * @file agenda.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer agenda ☎️
 * @version 0.1
 * @date 2026-05-08
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
    char apellidos[100];
    char numero[15];
    char apodo[100];
} Contacto;

typedef struct Agenda
{
    Contacto *lista;
    size_t tamanio;
    bool (*agregar)(struct Agenda *self, Contacto contacto);
    void (*listar)(struct Agenda *self);
    int (*seleccionar)(struct Agenda *self);
    void (*eliminar)(struct Agenda *self, int idx)
} Agenda;

bool agregarContacto(Agenda *agenda, Contacto contacto)
{
    if (agenda == NULL)
    {
        return false;
    }
    else
    {
        if (agenda->lista == NULL)
        {
            // La agenda esta vacia
            agenda->lista = malloc(sizeof(Contacto));
            if (agenda->lista == NULL)
                return false;
            agenda->lista[0] = contacto;
            agenda->tamanio = 1;
        }
        else
        {
            // la agenda ya tiene al menos un contacto
            agenda->lista = realloc(agenda->lista, sizeof(Contacto) * (agenda->tamanio + 1));
            agenda->lista[agenda->tamanio] = contacto;
            agenda->tamanio++;
        }
    }
    return true;
}

void listarContactos(Agenda *agenda)
{
    for (size_t i = 0; i < agenda->tamanio; i++)
    {
        printf("%zu. %s %s %s %s\n", i + 1, agenda->lista[i].nombre, agenda->lista[i].apellidos, agenda->lista[i].apodo, agenda->lista[i].numero);
    }
}

int seleccionarContacto(Agenda *agenda)
{
    char *cont[agenda->tamanio];
    for (size_t i = 0; i < agenda->tamanio; i++)
    {
        cont[i] = agenda->lista[i].apodo;
    }

    return showMenu(agenda->tamanio, cont, "Selecciona un Contacto");
}

void eliminarContacto(Agenda *agenda, int idx)
{
    if (agenda->lista != NULL)
    {
        if (agenda->tamanio == 1)
        {
            free(agenda->lista);
            agenda->lista = NULL;
            agenda->tamanio = 0;
        }
        else
        {
            memcpy(agenda->lista + idx, agenda->lista + idx + 1, sizeof(Contacto) * (agenda->tamanio - idx - 1));
            agenda->lista = realloc(agenda->lista, sizeof(Contacto) * (agenda->tamanio - 1));
            agenda->tamanio--;
        }
    }
}

Agenda *nuevaAgenda()
{
    Agenda *agenda;
    agenda = malloc(sizeof(Agenda));
    agenda->lista = NULL;
    agenda->tamanio = 0;
    agenda->agregar = agregarContacto;
    agenda->listar = listarContactos;
    agenda->seleccionar = seleccionarContacto;
    agenda->eliminar = eliminarContacto;
    return agenda;
};

int main()
{
    char *menu[] = {"Agregar", "Listar", "Llamar", "Eliminar", "Salir"};
    int seleccion;

    Agenda *agenda = nuevaAgenda();
    Contacto tmp;

    do
    {
        seleccion = showMenu(5, menu, "Agenda de Contactos");

        if (seleccion == 0)
        {
            // Agregar
            printf("Ingrese el nombre: ");
            fgets(tmp.nombre, 100, stdin);
            tmp.nombre[strlen(tmp.nombre) - 1] = '\0';
            printf("Ingrese el apellidos: ");
            fgets(tmp.apellidos, 100, stdin);
            tmp.apellidos[strlen(tmp.apellidos) - 1] = '\0';
            printf("Ingrese el apodo: ");
            fgets(tmp.apodo, 100, stdin);
            tmp.apodo[strlen(tmp.apodo) - 1] = '\0';
            printf("Ingrese el telefono: ");
            fgets(tmp.numero, 15, stdin);
            tmp.numero[strlen(tmp.numero) - 1] = '\0';

            agenda->agregar(agenda, tmp);
            // agregarContacto(agenda, tmp);
        }
        else if (seleccion == 1)
        {
            // Listar
            if (agenda->tamanio == 0)
                printf("Agenda vacia\n");
            else
                agenda->listar(agenda);
            // listarContactos(agenda);
        }
        else if (seleccion == 2)
        {
            // Llamar
            if (agenda->tamanio == 0)
                printf("Agenda vacia\n");
            else
            {
                // int idx = seleccionarContacto(agenda);
                int idx = agenda->seleccionar(agenda);
                printf("Llamando a %s...\n", agenda->lista[idx].numero);
            }
        }
        else if (seleccion == 3)
        {
            // Eliminar
            if (agenda->tamanio == 0)
                printf("Agenda vacia\n");
            else
            {
                // int idx = seleccionarContacto(agenda);
                int idx = agenda->seleccionar(agenda);
                agenda->eliminar(agenda, idx);
            }
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
