/**
 * @file multiple.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Herencia multiple
 * @version 0.1
 * @date 2026-03-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>

using namespace std;

class Mama {
    public:

    void habla() {
        cout << "Y si lo encuentro yo, que te hago? 🩴 " << endl;
    }
};

class Papa {
    public:
    void habla() {
        cout << "Yo no se, preguntale a tu mama 👔" << endl;
    }
};

class Amante {
    public:
    void habla() {
        cout << "Sin que se entera tu espos@ 😈" << endl;
    }
};

class Hijx : public Mama, public Papa, public Amante {

};


int main()
{
    Hijx h;

    h.Mama::habla();
    h.Papa::habla();
    h.Amante::habla();
    h.habla();
    
    return 0;
}
