#ifndef ANAK_H
#define ANAK_H

#include <iostream>
#include <string>
using namespace std;

class Anak {
    public: 
    string nama;
    Anak (string pNama) : nama(pNama) {
        cout << "anak\"" << nama << "\" ada \n";
    }
    ~Anak(){
        cout << "anak\"" << nama << "\" tidak ada \n";
    }
};
#endif