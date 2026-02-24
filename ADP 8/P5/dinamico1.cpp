/**
 * @file dinamico1.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa con memoria dinamica
 * @version 0.1
 * @date 2026-02-24
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int *a = new int;
    *a = 10;
    cout << a << " - " << *a << endl;

    delete a;

    int *arrg = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arrg[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arrg + i << " - " << *(arrg + i) << endl;
    }

    delete[] arrg;

    return 0;
}
