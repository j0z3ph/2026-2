/**
 * @file plantilla.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer plantilla
 * @version 0.1
 * @date 2026-03-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T>
T suma(T a, T b) {
    T res;
    res = a + b;
    return res;
}

template<typename T>
class Lista{
    private:
    T *lista;
    int cont;

    public:
    Lista() {
        this->lista = nullptr;
        this->cont = 0;
    }

    void push_back(T elemento) {
        if(this->lista == nullptr) {
            // Vacia
            this->lista = new T[1];
            this->lista[0] = elemento;
            this->cont = 1;
        } else {
            // Vacian't
            T *tmp = new T[this->cont + 1];
            memcpy(tmp, this->lista, sizeof(T) * this->cont);
            tmp[this->cont] = elemento;
            this->cont++;
            delete[] this->lista;
            this->lista = tmp;
        }
    }

    int size() {
        return this->cont;
    }

    T get(int idx) {
        return this->lista[idx];
    }

    ~Lista() {
        delete[] this->lista;
    }
};

class Perritos {

};

int main()
{
    Lista<double> lista;

    lista.push_back(3);
    lista.push_back(3);
    lista.push_back(3);
    lista.push_back(3);
    lista.push_back(3);

    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista.get(i) << " ";
    }

    cout << endl;
    
    
    
    return 0;
}
