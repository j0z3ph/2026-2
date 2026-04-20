/**
 * @file suma.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que hace sumas
 * @version 0.1
 * @date 2026-04-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Usuario, ingresa un numero: ";
    cin >> num1;
    cout << "Ahora, ingresa otro numero: ";
    cin >> num2;

    cout << "La suma es: " << num1 + num2 << endl;
    
    return 0;
}
