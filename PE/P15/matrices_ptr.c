/**
 * @file matrices_ptr.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Punteros y matrices
 * @version 0.1
 * @date 2026-04-20
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <stdio.h>

int main()
{
    int m[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    printf("%p - %i\n", m, **m);
    printf("%p - %i\n", *m+1, *(*m+1));
    printf("%p - %i\n", m + 2, **(m+2));
    printf("%p - %i\n", *(m+1) + 2, *(*(m+1) + 2));

    return 0;
}
