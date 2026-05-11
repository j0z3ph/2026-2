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
#include <vector>

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
    // Persona() {
    //     this->nombre = "";
    //     this->apellido1 = "";
    //     this->apellido2 = "";
    //     this->edad = 0;
    // }

    Persona(string nombre, string apellido1, string apellido2, int edad) {
        this->nombre = nombre;
        this->apellido1 = apellido1;
        this->apellido2 = apellido2;
        this->edad = edad;
    }

    Persona(string nombre, string apellido1, int edad) {
        this->nombre = nombre;
        this->apellido1 = apellido1;
        this->apellido2 = "";
        this->edad = edad;
    }

    ~Persona() {
        // este no se puede sobrecargar
        cout << "Me mori 🪦" << endl;
    }
    
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
    int getEdad() { return this->edad; }
};

ostream& operator<<(ostream& os, Persona& p) {
    os << p.getNombre() << " " << p.getApellido1() << " "
    << p.getApellido2() << " " << p.getEdad();
    return os;
}


int main()
{
    int entero;
    {
        Persona persona("Yael", "Vazquez", "Fuentes", 23);
        cout << persona << endl;


    }//Persona p1("", "", -100);

    vector<Persona> lista;

    lista.push_back(Persona("Leo", "Castanieda", "Martinez", 20));
    lista.push_back(Persona("Jose Manuel", "Jimenez", "Cortez", 21));
    lista.push_back(Persona("Roy", "Que ahora", "No vino", 32));

    for (size_t i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << endl;
    }
    

    //persona.setNombre("Angel");
    //persona.setApellido1("Castillo");
    //persona.setApellido2("Moreno");
    
    //persona.setEdad(-100);

    //cout << persona.getNombre() << endl;
    
    cout << "Fin del programa" << endl;

    return 0;
}
