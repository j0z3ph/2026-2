/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer clase 🤖
 * @version 0.1
 * @date 2026-02-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>

using namespace std;

class Persona {
    private:
    string nombre; // atributos de instancia
    int edad; // atributo de instancia
    
    public:

    static int variable; // atributo de clase

    // Setters
    void setNombre(string nombre) { this->nombre = nombre; }
    void setEdad(int edad) { 
        if(edad < 0) {
            cout << "Error" << endl;
        } else this->edad = edad; 
    }

    // Getters
    string getNombre() { return this->nombre; }
    int getEdad() { return  this->edad; }

    // Metodos
    void habla() {
        cout << "Hola" << endl;
    }

};

int Persona::variable = 8;

int main()
{
    
    Persona p;
    p.setNombre("Pancho");
    p.setEdad(-30);
 
    
    return 0;
}
