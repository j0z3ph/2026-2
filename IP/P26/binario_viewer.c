/**
 * @file binario_viewer.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Vizualizador de mis binarios
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

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
    int magia;
    int entero;
    double doble;
    Estudiante e;

    FILE *archi = fopen("archivo.bin", "rb");
    if(archi == NULL) {
        printf("Upss, no epsizte 🥴");
        return 1;
    }

    fread(&magia, sizeof(int), 1, archi);
    if(magia == 666) {
        // Lo conozco
        //fread(&entero, sizeof(int), 1, archi);
        //fread(&doble, sizeof(double), 1, archi);
        
        //fseek(archi, sizeof(int) + sizeof(double), SEEK_CUR);
        //fread(&e, sizeof(Estudiante), 1, archi);

        fseek(archi, (sizeof(Estudiante) + sizeof(double))* -1, SEEK_END);
        fread(&doble, sizeof(double), 1, archi);
        printf("Entero: %i\nDoble: %lf\n", entero, doble);
        //printf("Boleta: %s\nNombre: %s\nFecha de Nacimiento: %02i/%02i/%04i\n", e.boleta, e.nombre, e.nacimiento.dia, e.nacimiento.mes, e.nacimiento.anio);
    } else {
        // No lo conozco
        printf("Formato incorrecto\n");
    }


    fclose(archi);
    
    return 0;
}
