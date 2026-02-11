/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con entradas y salidas :>
 * @version 0.1
 * @date 2026-02-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    
    //putc(getc(stdin), stdout);
    //putc(getc(stdin), stdout);
    //putc(getc(stdin), stdout);

    //putchar(getchar());

    char buffer[30];
    fgets(buffer, 30, stdin);
    puts(buffer);
    

    return 0;
}
