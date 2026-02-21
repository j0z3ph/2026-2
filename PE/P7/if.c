/**
 * @file if.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer IF
 * @version 0.1
 * @date 2026-02-20
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int edad;

    printf("Usuario, ingresa tu edad :D ");
    scanf("%d", &edad);

    if (edad >= 18 && edad <= 25)
    {
        printf("Bienvenido Adulto Chiquito\n");
    }
    else if (edad > 25 && edad <= 40)
    {
        printf("Bienvenido Chavorruco\n");
    }
    else if (edad > 40 && edad <= 60)
    {
        printf("Bienvenido Viejo\n");
    }
    else if (edad > 0 && edad < 18)
    {
        printf("Estas verde\n");
    }
    else if (edad <= 0)
    {
        printf("Graciosito\n");
    }
    else
    {
        printf("Pensionados aqui no\n");
    }

    return 0;
}
