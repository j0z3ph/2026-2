/**
 * @file dinamica.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Memoria dinamica
 * @version 0.1
 * @date 2026-02-26
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <stdexcept>

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
            throw runtime_error("Tonoto XD");
        }

        this->filas = filas;
        this->columnas = columnas;
        this->matrix = new float[filas * columnas];
    }

    ~Matrix()
    {
        delete[] this->matrix;
    }

    /// Getters
    int getFilas() { return this->filas; }
    int getColumnas() { return this->columnas; }

    void setValor(int fila, int columna, float valor)
    {
        if (fila < 0 || fila >= this->filas)
        {
            throw runtime_error("Indice de fila fuera de rango.");
        }
        if (columna < 0 || columna >= this->columnas)
        {
            throw runtime_error("Indice de columna fuera de rango.");
        }

        this->matrix[(this->filas * fila) + columna] = valor;
    }

    float getValor(int fila, int columna) {
        if (fila < 0 || fila >= this->filas)
        {
            throw runtime_error("Indice de fila fuera de rango.");
        }
        if (columna < 0 || columna >= this->columnas)
        {
            throw runtime_error("Indice de columna fuera de rango.");
        }
        return this->matrix[(this->filas * fila) + columna];
    }

    friend Matrix operator+(Matrix &m1, Matrix &m2) {
        Matrix m3(m1.getFilas(), m1.getColumnas());
        for (int i = 0; i < m1.getFilas(); i++)
        {
            for (int j = 0; j < m1.getColumnas(); j++)
            {
                m3.setValor(i,j, m1.getValor(i,j) + m2.getValor(i,j));
            }
        }
        return m3;
    }

    friend ostream& operator<<(ostream &os, Matrix &m) {
        for (int i = 0; i < m.getFilas(); i++)
        {
            for (int j = 0; j < m.getColumnas(); j++)
            {
                os << m.getValor(i,j) << " ";
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
        Matrix m(3, 3), m2(3, 3);
        float cont = 0.0f;

        for (int i = 0; i < m.getFilas(); i++)
        {
            for (int j = 0; j < m.getColumnas(); j++)
            {
                cont++;
                m.setValor(i,j,cont);
                m2.setValor(i,j,cont);
            }
        }
        Matrix m3 = m + m2;
        
        cout << m3 << endl;
        
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (...)
    {
    }

    return 0;
}
