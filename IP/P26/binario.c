/**
 * @file binario.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-05-18
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#include <string.h>

typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
} Fecha;


typedef struct Estudiante
{
    char boleta[20];
    char nombre[100];
    Fecha nacimiento;
} Estudiante;


int main()
{
    int magia = 666;
    int a = 56;
    double pi = 3.1416;
    Estudiante e;
    strcpy(e.boleta, "12345");
    strcpy(e.nombre, "Tilin");
    e.nacimiento.dia = 6;
    e.nacimiento.mes = 8;
    e.nacimiento.anio = 2007;

    FILE * archi = fopen("archivo.bin", "wb");

    fwrite(&magia, sizeof(int), 1, archi);
    fwrite(&a, sizeof(int), 1, archi);
    fwrite(&pi, sizeof(double), 1, archi);
    fwrite(&e, sizeof(Estudiante), 1, archi);

    fclose(archi);
    
    return 0;
}
