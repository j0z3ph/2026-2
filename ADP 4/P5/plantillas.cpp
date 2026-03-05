/**
 * @file plantillas.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Plantillas
 * @version 0.1
 * @date 2026-03-05
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>
#include<vector>

using namespace std;


template<typename T> 
class Lista {
    private:
    T *lista;
    int cont;

    public:
    Lista() {
        this->lista = nullptr;
        this->cont = 0;
    }

    ~Lista() {
        if(this->lista != nullptr) {
            delete[] this->lista;
        }
    }

    void push_back(T valor) {
        if(this->lista == nullptr) {
            // Lista vacia
            this->lista = new T[1];
            this->lista[0] = valor;
            this->cont = 1;
        } else {
            // Ya tenemos elementos
            T *tmp = new T[this->cont + 1];
            memcpy(tmp, this->lista, sizeof(T) * this->cont);
            tmp[this->cont] = valor;
            delete[] this->lista;
            this->lista = tmp;
            this->cont++;
        }
    }

    T get(int idx) {
        return this->lista[idx];
    }

    int size() { return this->cont; }
};

template<typename T> 
class Persona{};

int main()
{
    Lista<Persona<int>> lista;
    lista.push_back(Persona());
    lista.push_back(5);
    lista.push_back(5);
    lista.push_back(5);

    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista.get(i) << endl;
    }
    
    
    
    
    return 0;
}
