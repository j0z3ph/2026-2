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
    private:
    // Atributos
    string nombre;
    string apellido1;
    string apellido2;
    int edad;

    public:
    // Metodos
    
    // Setters
    void setNombre(string nombre) {
        this->nombre = nombre;
    }
    void setApellido1(string ap) {
        this->apellido1 = ap;
    }
    void setApellido2(string ap) {
        this->apellido2 = ap;
    }
    bool setEdad(int edad) {
        if(edad <= 0 || edad >100) {
            //cout << "Edad no valida" << endl; // NO HACER!!
            return false;
        } else {
            this->edad = edad;
            return true;
        }
    }

    // Getters
    string getNombre() {
        return this->nombre;
    }
    string getApellido1() {
        return this->apellido1;
    }
    string getApellido2() {
        return this->apellido2;
    }
};


int main()
{
    int entero;
    Persona persona;
    string cadena;

    persona.setNombre("Angel");
    persona.setApellido1("Castillo");
    persona.setApellido2("Moreno");
    
    persona.setEdad(-100);
    
    return 0;
}
