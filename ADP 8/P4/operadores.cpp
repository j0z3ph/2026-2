/**
 * @file operadores.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Jugando con operadores XD
 * @version 0.1
 * @date 2026-02-19
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>

using namespace std;

class Punto
{
private:
    int x;
    int y;

public:
    Punto(int x, int y) : x(x), y(y) {}

    // getters
    int getX() { return this->x; }
    int getY() { return this->y; }

    // Sobrecarga de operadores
    friend Punto operator+(Punto p1, Punto p2)
    {
        Punto res(p1.getX() + p2.getX(), p1.getY() + p2.getY());

        return res;
    }

    friend ostream &operator<<(ostream &os, Punto p)
    {
        os << "(" << p.x << "," << p.y << ")";
        return os;
    }
};

int main()
{
    Punto p1(2, 2);
    Punto p2(1, 0);

    Punto p3 = p1 + p2;

    cout << p3 << endl;

    return 0;
}
