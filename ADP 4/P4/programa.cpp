/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con las clases
 * @version 0.1
 * @date 2026-02-20
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>

using namespace std;

class Rectangulo
{
private:
    float base;
    float altura;

public:
    // Constructor
    /*Rectangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
    }*/

    Rectangulo(float base, float altura) : base(base), altura(altura) {}

    // Destructor
    ~Rectangulo()
    {
        cout << "Me mori" << endl;
    }

    // Getters
    float getBase()
    {
        return this->base;
    }
    float getAltura()
    {
        return this->altura;
    }

    // Setters
    void setBase(float base)
    {
        this->base = base;
    }
    void setAltura(float altura)
    {
        this->altura = altura;
    }

    // Metodo
    float area()
    {
        return base * altura;
    }
};

int main()
{
    Rectangulo r(6.5f, 5.4f);

    {
        Rectangulo r2(6, 7);
    }

    cout << r.area() << endl;

    return 0;
}
