/**
 * @file herencia.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de herencia
 * @version 0.1
 * @date 2026-03-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <stdexcept>

using namespace std;

class Figura {
    protected:
    float base;
    float altura;

    public:
    Figura(float base, float altura): 
    base(base),altura(altura) { 
        if(base <= 0.0 || altura <= 0.0) {
            throw runtime_error("Dimensiones incorrectas.");
        }
    }

    // Setters
    void setBase(float base) { this->base = base; }
    void setAltura(float altura) { this->altura = altura;}

    // Getters
    float getBase() {
        return this->base;
    }

    float getAltura() {
        return this->altura;
    }

    float area() {
        return 0.0f;
    }

};

class Rectangulo : public Figura {
    public:
    Rectangulo(float base, float altura):Figura(base, altura){
  
    }
};

class Triangulo : public Figura {
    
};


int main()
{
    Rectangulo r(5,6);
    Triangulo t;
    r.setAltura(6.7);
    r.setBase(6.7);
    
    cout << r.area() << endl;
    cout << t.area() << endl;
    

    return 0;
}
