/**
 * @file archivos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Archivos
 * @version 0.1
 * @date 2026-02-26
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream archi("Archivo.txt", ios::app);
    if(!archi.is_open()) {
        cout << "Error" << endl;
        return 1;
    }

    archi << "HOLA XD" << endl;
    archi.close();
    
    return 0;
}
