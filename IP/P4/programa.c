/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con variables 😘
 * @version 0.1
 * @date 2026-02-16
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

// Variables globales
int var = 8; // Esta reprobado

int main()
{
    var = 10;

    static int variable_uno = 0;
    float flotante = 5.6f;
    
    flotante = 3.1416f;

    {
        flotante = 6.0f;
        int a;
    }
    a = 8;
    
    return 0;
}
