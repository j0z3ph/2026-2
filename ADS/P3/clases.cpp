/**
 * @file clases.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-04-29
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>

using namespace std;

class Persona {
    public:
    // Atributos
    string nombre;
    string apellido1;

    private:
    string apellido2;

    // Metodos
};


int main()
{
    int entero;
    Persona persona;
    string cadena;

    persona.nombre = "Roy";
    persona.apellido1 = "Murillo";
    persona.apellido2 = "Orozco";

    
    return 0;
}
