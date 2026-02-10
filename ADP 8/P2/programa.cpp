/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con entradas y salidas
 * @version 0.1
 * @date 2026-02-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>
#include<ctime>
#include<cstdlib>
#include "biblioteca.hpp"

using namespace std;


int main()
{
    float dato1, dato2;
    cout << "Usuario, ingresa un valor: ";
    cin >> dato1;

    cout << "Ahora, ingresa otro valor: ";
    cin >> dato2;

    cout << "La multiplicacion de "<< dato1 << " y " << dato2 << " es: " << multiplicacion(dato1, dato2,2.5, 7.8) << endl;
    
    return 0;
}

