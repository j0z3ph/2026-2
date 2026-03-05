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

    // Metodo abstracto
    virtual float area() = 0;

};

class Rectangulo : public Figura {

    public:
    Rectangulo(float base, float altura): Figura(base, altura)
    {
        this->altura = altura;
        this->base = base;
    }

    // Polimorfismo
    // Sobreescritura
    float area() override {
        return this->base * this->altura;
    }
    // Sobrecarga
    float area(float base, float altura) {
        return base * altura;
    }
};

class Triangulo : public Figura {
    
    public:
    Triangulo(float base, float altura): Figura(base, altura)
    {
        this->altura = altura;
        this->base = base;
    }

    float area() override {
        return (this->base * this->altura) / 2.0f;
    }
};

class Cuadrado : public Figura {

    public:
    Cuadrado(float base) : Figura(base, base)
    {

    }
};


int main()
{
    //Figura f(6,7);
    Rectangulo r(5,6);
    Triangulo t(5,6);
    Cuadrado c(7);
    r.setAltura(6.7);
    r.setBase(6.7);
    
    cout << r.area() << endl;
    cout << r.area(5,6) << endl;
    
    cout << t.area() << endl;
    

    return 0;
}
