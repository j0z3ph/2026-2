/**
 * @file switch.c
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
    printf("\t\tMENU\n");
    printf("1. Opcion 1\n");
    printf("2. Opcion 2\n");
    printf("3. Opcion 3\n");
    printf("4. Opcion 4\n");
    printf("Seleccione una opcion: ");
    scanf("%i", &opcion);


    switch (opcion)
    {
    case 1:
        {int a = 1;
        printf("Seleccionaste la opcion %i\n", a);
        break;}
    case 2:
        int a = 2;
        printf("Seleccionaste la opcion %i\n", a);
        break;
    case 3:
        printf("Seleccionaste la opcion 3\n");
        break;
    case 4:
        printf("Seleccionaste la opcion 4\n");
        break;
    default:
        printf("Usuario tonoto >:[\n");
        break;
    }

    
    
    return 0;
}
