#ifndef PELAJAR_H
#define PELAJAR_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Pelajar {
    public: 
    string nama;
    Pelajar (string pNama) : nama(pNama) {
        cout << "pelajar\"" << nama << "\" ada \n";
    }
    ~Pelajar(){
        cout << "pelajar\"" << nama << "\" tidak ada \n";
    }
};
#endif