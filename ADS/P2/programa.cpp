/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa
 * @version 0.1
 * @date 2026-04-21
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>


int suma(int a, int b, int c = 0, int d = 0, int e = 0) {
    return a + b + c + d +e;
}

double suma(double a, double b) {
    return a + b;
}

using namespace std;

int main()
{
    string nombre;
    double a = 6, b = 10;
    cout << "Usuario, ingresa tu nombre: ";
    getline(cin, nombre);

    cout << "Hola " << nombre << "!!" << endl;

    cout << suma(a, b, 7) << endl;
    
    return 0;
}
