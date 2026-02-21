/**
 * @file menu.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Haciendo mi primer menu
 * @version 0.1
 * @date 2026-02-20
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int opcion;
    do
    {

        printf("\t\tMENU\n");
        printf("1. Opcion 1\n");
        printf("2. Opcion 2\n");
        printf("3. Opcion 3\n");
        printf("4. Opcion 4\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%i", &opcion);

        if (opcion == 1)
        {
            printf("Seleccionaste la opcion 1\n");
        }
        else if (opcion == 2)
        {
            printf("Seleccionaste la opcion 2\n");
        }
        else if (opcion == 3)
        {
            printf("Seleccionaste la opcion 3\n");
        }
        else if (opcion == 4)
        {
            printf("Seleccionaste la opcion 4\n");
        }
        else if (opcion == 5)
        {
            printf("Adios tonoto\n");
        }
        else
        {
            printf("Usuario tonoto >:[\n");
        }

        while (getchar() != '\n');

    } while (opcion != 5);

    return 0;
}
