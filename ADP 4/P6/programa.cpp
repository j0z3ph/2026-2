/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Herencia
 * @version 0.1
 * @date 2026-03-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <stdexcept>

using namespace std;

class Figura {
    protected:
    int base;
    int altura;

    public:
    Figura(int base, int altura){
        if(base < 1 || altura < 1) {
            throw runtime_error("Dimensiones incorrecta");
        }
        this->base = base;
        this->altura = altura;
    }

    // Getters
    int getBase() { return this->base; }
    int getAltura() { return this->altura; }

    // Metodo
    // Funcion virtual pura (aka abstracta)
    virtual int area() = 0;

};


class Rectangulo : public Figura {
    public:
    Rectangulo(int base, int altura): Figura(base, altura)
    {

    }

    // Sobreescritura
    // POLIMORFISMO
    int area() override { 
        return this->base * this->altura; 
    }

    /*int erae() override {
        return this->base * this->altura; 
    }*/
};

class Triangulo : public Figura {
    public:
    Triangulo(int base, int altura) : Figura(base, altura)
    {

    }

    int area() override { 
        return (this->base * this->altura) / 2; 
    }
};

class Cuadrado: public Figura {
    public:
    Cuadrado(int base) : Figura(base, base)
    {

    }
};


int main()
{
    Rectangulo r(5,6);
    Triangulo t(5,6);
    Cuadrado c(5);

    
    cout << r.area() << endl;
    cout << t.area() << endl;
    
    return 0;
}
