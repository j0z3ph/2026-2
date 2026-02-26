/**
 * @file vectores.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Vectores
 * @version 0.1
 * @date 2026-02-26
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<float> lista;
    vector<float> enteros;

    enteros.push_back(4);
    enteros.push_back(4);
    enteros.push_back(4);
    enteros.push_back(4);
    enteros.push_back(4);
    enteros.push_back(4);
    enteros.push_back(4);

    lista.push_back(5);
    lista.push_back(5);
    lista.push_back(5);
    lista.push_back(5);
    lista.push_back(5);
    lista.push_back(5);
    lista.push_back(5);
    
    for (int i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << " ";
    }

    for(auto numero: lista) {
        cout << numero << " ";
    }
    
    
    
    return 0;
}
