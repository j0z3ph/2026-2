/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer clase 🤔
 * @version 0.1
 * @date 2026-02-17
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>

using namespace std;

class Rectangulo {
    private:
    // Atributos
    int base; // variable de instancia
    int altura;

    public:

    // Getters
    int getBase(){ return base; }
    int getAltura() { return altura; }

    // Setters
    void setBase(int base) {
        if(base <= 0) cout << "Eres un tonoto 🤬" << endl;
        else this->base = base;
    }
    void setAltura(int altura) {
        this->altura = altura;
    }
    
    
    // Metodos
    int area() {
        return base * altura;
    }

    void metodo(){
        int a; // variable local

        {
            int b; // variable de bloques
        }

    }

};


int main()
{
    //Rectangulo::variable_de_clase = 7;
    Rectangulo r;
    r.setBase(-7);
    r.setAltura(5);

    cout << r.area() << endl;

    return 0;
}
