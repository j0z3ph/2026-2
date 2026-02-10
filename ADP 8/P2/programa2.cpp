/**
 * @file programa2.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas juegos con entradas
 * @version 0.1
 * @date 2026-02-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    string cadena;

    cout << "Usuario, ingresa un texto: ";
    //cin >> cadena;
    getline(cin, cadena); // para cadenas con espacios

    cout << "El texto ingresado es: " << cadena;
    
    return 0;
}
