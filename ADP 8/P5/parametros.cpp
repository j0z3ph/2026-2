/**
 * @file parametros.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de paso de parametros por referencia
 * @version 0.1
 * @date 2026-02-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>

using namespace std;

int suma_valor(int a, int b) {
    a++;
    return a + b;
}

int suma_ref(int *a, int *b) {
    (*a)++;
    return *a + *b;
}

int suma_ref_chida(int &a, int &b) {
    a++;
    return a + b;
}

int main()
{
    int a = 6, b =8;
    cout << suma_valor(a, b) << endl;
    cout << suma_ref(&a, &b) << endl;
    cout << suma_ref_chida(a, b) << endl;
    
    return 0;
}
