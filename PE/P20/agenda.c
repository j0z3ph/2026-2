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
#include<stdio.h>
#include<stdlib.h>
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
} Agenda;

Agenda* nuevaAgenda() {
    Agenda *agenda;
    agenda = malloc(sizeof(Agenda));
    agenda->lista = NULL;
    agenda->tamanio = 0;
    return agenda;
};


int main()
{
    char *menu[] = {"Agregar", "Listar", "Llamar", "Eliminar", "Salir"};
    int seleccion;

    Agenda *agenda = nuevaAgenda();
    Contacto tmp;
    

    do{
        seleccion = showMenu(5, menu, "Agenda de Contactos");

        if(seleccion == 0) {
            // Agregar
            printf("Ingrese el nombre: ");
            fgets(tmp.nombre, 100, stdin);
            printf("Ingrese el apellidos: ");
            fgets(tmp.apellidos, 100, stdin);
            printf("Ingrese el apodo: ");
            fgets(tmp.apodo, 100, stdin);
            printf("Ingrese el telefono: ");
            fgets(tmp.numero, 15, stdin);

            


        } else if(seleccion == 1) {
            // Listar
        } else if(seleccion == 2) {
            // Llamar
        } else if (seleccion == 3) {
            // Eliminar
        } else {
            // Salir
        }

    }while(seleccion != 4);
    
    
    return 0;
}
