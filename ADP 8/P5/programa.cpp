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

    ~Matrix() {
        delete[] this->matrix;
    }
};

int main()
{
    for (;100;)
    {
        try
        {
            Matrix *m = new Matrix(2, 2);
            delete m;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    return 0;
}
