/**
 * @file continue.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con continues
 * @version 0.1
 * @date 2026-02-24
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if ((i & 1) == 0)
            continue;
        printf("%i\n", i);
    }

    return 0;
}
