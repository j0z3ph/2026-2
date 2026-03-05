/**
 * @file amigos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Amigos
 * @version 0.1
 * @date 2026-03-05
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include<iostream>

using namespace std;

class BlancoLuis {
    private:
    friend class Daniela;
    string secreto;
    public:
    BlancoLuis() {
        this->secreto = "Me gusta la crush de mi compa";
    }

    string chismesito(Daniela d) {
        return d.secreto;
    }
    //friend string daniela(BlancoLuis bl);
};

/*string daniela(BlancoLuis bl) {
    return bl.secreto;
}*/

class Daniela {
    private:
    string secreto;

    public:
    Daniela() {
        this->secreto = "Soy muy floja y chismosa";
    }

    string chismesito(BlancoLuis bl) {
        return bl.secreto;
    }
};


int main()
{
    BlancoLuis bl;
    Daniela d;
    cout << d.chismesito(bl) << endl;
    
    return 0;
}
