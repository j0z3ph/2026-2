/**
 * @file dinamica.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa con memoria dinamica XD
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <vector>

using namespace std;

class Evidencia {
    private:
    string folio;
    string descripcion;

    public:
    Evidencia(string folio, string descripcion) : folio(folio), descripcion(descripcion) {}

    Evidencia() {}


};

class Sistema {
    private:
    vector<Evidencia*> evidencias;

    public:

    void agregarEvidencia(Evidencia* e) {
        this->evidencias.push_back(e);
    }

};

int main()
{
    int *entero;
    entero = new int;
    Sistema *sys = new Sistema;
 
    Evidencia *e = new Evidencia("1234", "cabeza humana");
    sys->agregarEvidencia(e);


    delete sys;
    delete e;


    // Arreglos
    int *arr = new int[100];
    Evidencia *arrE = new Evidencia[100];

    int *tmp = new int[200];
    memcpy(tmp, arr, sizeof(int) * 100);
    delete[] arr;
    arr = tmp;
    

    delete[] arr;
    delete[] arrE;


    return 0;
}
