/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer estructura
 * @version 0.1
 * @date 2026-05-08
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
} Fecha;

//typedef struct Fecha Fecha;

typedef struct Persona
{
    char nombre[100];
    char apellido1[100];
    char apellido2[100];
    Fecha fnac;
} Persona;

int i1;


typedef int entero;


void imprimeFecha(Fecha f) {
    printf("%02i/%02i/%04i", f.dia, f.mes, f.anio);
}

int main()
{
    entero variable;
    Fecha f;
    f.dia = 8;
    f.mes = 5;
    f.anio = 2026;
    
    imprimeFecha(f);

    Persona p;
    strcpy(p.nombre, "Jose Luis");
    
    //Persona l[100000];
    Persona *lista;
    lista = malloc(sizeof(Persona)*100000);

    (*lista).nombre;
    lista->nombre;

    printf("\n%lu\n", sizeof(Persona));

    
    
    
    return 0;
}
