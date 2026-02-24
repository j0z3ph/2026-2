/**
 * @file if.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer IF :>
 * @version 0.1
 * @date 2026-02-23
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int edad;
    printf("Usuario, ingresa tu edad: ");
    scanf("%i", &edad);

    if (edad >= 18 && edad <= 20)
    {
        printf("Hola adulto chiquito 😈🔥\n");
    }
    else if (edad > 20 && edad <= 30)
    {
        printf("Aqui esta la solicitud de trabajo 📝\n");
    }
    else if (edad > 30 && edad <= 40)
    {
        printf("Paga la pension 📉\n");
    }
    else if (edad > 40)
    {
        printf("Que te panzo 🐖\n");
    }
    else if (edad < 1)
    {
        printf("Primero nace 🍼\n");
    }
    else
    {
        printf("Regresa cuando seas adulto 🐣\n");
    }

    return 0;
}
