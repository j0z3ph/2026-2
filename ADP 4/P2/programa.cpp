/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario su estatura y le devuelve su estatura
 * @version 0.1
 * @date 2026-02-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    string nombre;

    cout << "Usuario, ingresa tu nombre 🥰 ";
    //cin >> nombre;
    getline(cin, nombre);
    
    cout << "Tu nombre es " << nombre << "." << endl;
    
    return 0;
}
