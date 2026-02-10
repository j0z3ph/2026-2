/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer pedida de entrada y salida
 * @version 0.1
 * @date 2026-02-09
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

    char buffer[50];
    //gets(buffer);
    fgets(buffer, 50, stdin);
    puts(buffer);
    

    return 0;
}
