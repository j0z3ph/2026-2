/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2026-02-26
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        int *b = new int;
        int *a = new int[1000];

        delete b;
        delete[] a;
    }
    // main();
    return 0;
}
