/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer estructura
 * @version 0.1
 * @date 2026-05-11
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
    // void imprime() {
    //     printf("%i-%i-%i\n", dia, mes, anio);
    // }
} Fecha;

//typedef struct Fecha Fecha;

typedef struct Persona
{
    char nombre[100];
    char apellido1[100];
    char apellido2[100];
    Fecha fnac;
} Persona;

typedef int entero;

Fecha creaFecha(int dia, int mes, int anio){
    Fecha f;
    f.dia = dia;
    f.mes = mes;
    f.anio = anio;
    return f;
}


int main()
{
    int variable;
    entero var;
    struct Fecha fecha;
    Fecha f;

    fecha.dia = 1;
    fecha.mes = 5;
    fecha.anio = 2026;

    Persona p;
    strcpy(p.nombre, "Luis");

    printf("%lu", sizeof(Persona));

    Persona *personas = malloc(sizeof(Persona));

    (*personas).fnac.dia = 10;
    personas->fnac.dia = 10;





    
    return 0;
}
