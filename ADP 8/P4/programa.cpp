/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi segunda clase
 * @version 0.1
 * @date 2026-02-19
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>

using namespace std;

class Rectangulo
{
private:
    int base;
    int altura;

public:
    //static int variable;
    // Constructor

    /*Rectangulo(int base, int altura) {
        this->base = base;
        this->altura = altura;
    }*/

    Rectangulo(int base, int altura): base(base), altura(altura) 
    {
    }

    // Destructor
    ~Rectangulo() {
        cout << "Me mori ☠️" << endl;
    }

    // Getters
     
    int getBase() { return this->base; }
    int getAltura() { return this->altura; }

    // Setters
    void setBase(int base) { this->base = base; }
    void setAltura(int altura) { this->altura = altura; }

    // Metodos

    /// @brief Retorna el area del rectangulo
    /// @return Area
    int area() { return this->base * this->altura; }
};

//int Rectangulo::variable = 8;

int main()
{
    Rectangulo r(6, 7);

    {
        Rectangulo r2(4,5);
    }


    //cout << "El area es: " << r.area() << endl << r.variable << endl;

    cout << "El area es: " << r.area() << endl;

    return 0;
}
