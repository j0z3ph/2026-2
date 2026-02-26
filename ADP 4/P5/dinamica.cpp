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
#include<iostream>
#include<stdexcept>

using namespace std;

class Matrix {
    private:
    int filas;
    int columnas;
    float *matrix;

    public:
    Matrix(int filas, int columnas) {
        if(filas < 1 || columnas < 1) {
            throw runtime_error("Tonoto XD");
        }

        this->filas = filas;
        this->columnas = columnas;
        this->matrix = new float[filas * columnas];
    }

};



int main()
{
    try
    {
        Matrix m(-10, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    } catch(...) {
        
    }
    
    

    return 0;
}
