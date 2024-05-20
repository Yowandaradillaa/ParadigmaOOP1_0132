#ifndef PASIEN_H
#define PASIEN_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Pasien {
    public: 
    string nama;
    Pasien (string pNama) : nama(pNama) {
        cout << "pasien\"" << nama << "\" ada \n";
    }
    ~Pasien(){
        cout << "pasien\"" << nama << "\" tidak ada \n";
    }
};
#endif