/**
 * @file programa.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de memoria dinamica
 * @version 0.1
 * @date 2026-02-24
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <stdexcept> // runtime_exception
#include <fstream>

using namespace std;

class Matrix
{
private:
    int filas;
    int columnas;
    float *matrix;

public:
    Matrix(int filas, int columnas)
    {
        if (filas < 1 || columnas < 1)
        {
            throw runtime_error("Dimensiones incorrectas.");
        }
        this->filas = filas;
        this->columnas = columnas;
        this->matrix = new float[this->filas * this->columnas];
    }

    // Setter
    void setValor(int fila, int columna, float valor) {
        if(fila < 0 || columna < 0) {
            throw runtime_error("Coordena fuera de rango");
        }
        if(fila >= this->filas || columna >= this->columnas) {
            throw runtime_error("Coordena fuera de rango");
        }
        this->matrix[fila * this->columnas + columna] = valor;
    }

    // Getter
    float getValor(int fila, int columna) {
        if(fila < 0 || columna < 0) {
            throw runtime_error("Coordenada fuera de rango");
        }
        if(fila >= this->filas || columna >= this->columnas) {
            throw runtime_error("Coordenada fuera de rango");
        }
        return this->matrix[fila * this->columnas + columna];
    }
    int getNumeroFilas() { return this->filas; }
    int getNumeroColumnas() { return this->columnas; }

    ~Matrix() {
        delete[] this->matrix;
    }

    friend ostream& operator<<(ostream &os, Matrix &m) {
        for (int f = 0; f < m.getNumeroFilas(); f++)
        {
            for (int c = 0; c < m.getNumeroColumnas(); c++)
            {
                os << m.getValor(f,c) << " ";
            }
            os << endl;
        }
        return os;
    }
};

int main()
{
    
    try
    {
        Matrix *m = new Matrix(4, 5);
        int cont = 0;

        for (int f = 0; f < m->getNumeroFilas(); f++)
        {
            for (int c = 0; c < m->getNumeroColumnas(); c++)
            {
                m->setValor(f,c, ++cont);
            }
        }

        ofstream archi("matrix.txt");
        if(!archi.is_open()) {
            cout << "Upsss" << endl;
            return 1;
        }
    
        archi << *m << endl;  
        
        archi.close();
        
        delete m;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}
