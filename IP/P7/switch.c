/**
 * @file switch.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer menu
 * @version 0.1
 * @date 2026-02-23
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int opcion;
    printf("\t\tMENU\n");
    printf("1. Opcion 1\n");
    printf("2. Opcion 2\n");
    printf("3. Opcion 3\n");
    printf("4. Opcion 4\n");
    printf("Selecciona la opcion deseada: ");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
    {
        int a;
        printf("Seleccionaste la opcion 1\n");
        break;
    }
    case 2:
        printf("Seleccionaste la opcion 2\n");
        break;
    case 3:
        printf("Seleccionaste la opcion 3\n");
        break;
    case 4:
        printf("Seleccionaste la opcion 4\n");
        break;

    default:
        printf("Estas tonoto? 🤬\n");
        break;
    }

    return 0;
}
