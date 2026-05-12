/**
 * @file uniones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Uniones vs Estructuras
 * @version 0.1
 * @date 2026-05-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

struct Estructura
{
    int a;
    float b;
    double c;
};

union Union
{
    int a;
    float b;
    double c;
};

int main()
{
    struct Estructura e;
    union Union u;

    e.a = 5;
    e.b = 6.5f;
    e.c = 5.6;

    u.a = 5;
    u.b = 6.5f;
    u.c = 5.6;

    printf("%lf - %lf\n", e.c, u.c);
    printf("%lu - %lu\n", sizeof(e), sizeof(u));
    
    return 0;
}
