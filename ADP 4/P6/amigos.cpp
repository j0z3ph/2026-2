/**
 * @file amigos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Amigos? 🥱
 * @version 0.1
 * @date 2026-03-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>

using namespace std;


class Emmanuel {
    private:
    string mensaje;

    friend class Gabriel;

    public:
    Emmanuel() {
        this->mensaje = "Secreto 🔐";
    }
    string chismesito(Gabriel e) {
        return e.mensaje;
    }

    //friend string chismoso(Emmanuel e);
    //void metodo();
};

class Gabriel {
    private:
    string mensaje;

    public:
    Gabriel() {
        this->mensaje = "Soy bien chismoso";
    }

    string chismesito(Emmanuel e) {
        return e.mensaje;
    }

};


//void Ejemplo::metodo() {
    // Algo
//}

/*string chismoso(Ejemplo e) {
    return e.mensaje;
}*/

int main()
{
    Emmanuel e;
    Gabriel g;

    cout << g.chismesito(e);

    
    return 0;
}
