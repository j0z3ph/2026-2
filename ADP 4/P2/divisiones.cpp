/**
 * @file divisiones.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Este programa hace divisiones
 * @version 0.1
 * @date 2026-02-12
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "biblioteca.hpp"

using namespace std;

int main()
{
    float a = 7;
    float b = 3;
    cout << divide(a, b, 0.5, 0.5) << endl;

    return 0;
}
