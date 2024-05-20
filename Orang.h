#ifndef ORANG_H
#define ORANG_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Orang {
    public:
    string nama;
    vector<Pelajar*>daftar_pelajar;

    Orang (string pNama) : nama(pNama) {
        cout << "Orang \"" << nama << "\" ada \n";
    }
    ~Orang (){
        cout << "Orang \"" << nama << "\" tidak ada \n";
    }
    void tambahPelajar(Pelajar*);
    void cetakPelajar();
};

void Orang::cetakPelajar(){
    cout << "Daftar pelajar dari orang\"" << this->nama << "\":\n";
    for (auto& a :daftar_pelajar) {
        cout << a->nama << "\n";
    }
}
#endif