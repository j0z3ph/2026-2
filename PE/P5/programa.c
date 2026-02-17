/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con variables y mas cosas
 * @version 0.1
 * @date 2026-02-16
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
#define PI 3.1416
#define AH print("Hola Mundo\n");

// Variable global
int var = 9; // Estan reprobados

int main()
{
    const float PI_2 = 3.1416;
    PI = 3;

    AH
    static int variable_1; // estatica
    float flotante = 5.6f;

    variable_1 = 8;

    {
        variable_1 = 10;
        int a;
    }
    
    
    return 0;
}
