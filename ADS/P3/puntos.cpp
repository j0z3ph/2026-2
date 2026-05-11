/**
 * @file puntos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2026-05-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>

using namespace std;

class Punto {
    private:
    int x;
    int y;

    public:

    // Getters
    int getX() { return this->x; }
    int getY() { return this->y; }

    // Setters
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

};

Punto operator+(Punto &p1, Punto &p2) {
    Punto p3;
    p3.setX(p1.getX() + p2.getX());
    p3.setY(p1.getY() + p2.getY());
    return p3;
}

ostream& operator<<(ostream& os, Punto p) {
    os << "(" << p.getX() << "," << p.getY() << ")";
    return os;
}

int main()
{
    Punto p1, p2;
    p1.setX(5);
    p1.setY(6);
    p2.setX(7);
    p2.setY(8);
    
    Punto p3 = p1 + p2;

    cout<< p1 << endl << p2 << endl << p3 <<endl;
    
    return 0;
}
