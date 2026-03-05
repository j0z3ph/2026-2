/**
 * @file multiple.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Multiple
 * @version 0.1
 * @date 2026-03-05
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>

using namespace std;

class Mama {
    public:
    void habla() {
        cout << "Si lo encuentro, que te hago? 🩴" << endl;
    }
};

class Papa {
    public:
    void habla() {
        cout << "Pasame tu nombre completo 🧐" << endl;
    }
};

class Cuyeyo {
    public:
    void habla() {
        cout << "Aceptame como tu padre 🥺" << endl;
    }
};

class Hijx : public Mama, public Papa, public Cuyeyo 
{

};

int main()
{
    Hijx h;

    h.Mama::habla();
    h.Papa::habla();
    h.Cuyeyo::habla();
    
    return 0;
}
