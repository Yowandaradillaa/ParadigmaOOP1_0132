#ifndef PELAJAR_H
#define PELAJAR_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Pelajar {
    public:
    string nama;
    vector<Orang*>daftar_anak;

    Pelajar (string pNama) : nama(pNama) {
        cout << "Pelajar \"" << nama << "\" ada \n";
    }
    ~Pelajar (){
        cout << "Pelajar \"" << nama << "\" tidak ada \n";
    }
    void tambahOrang(Orang*);
    void cetakOrang();
};

void Pelajar::cetakOrang(){
    cout << "Daftar anak dari ibu\"" << this->nama << "\":\n";
    for (auto& a :daftar_orang) {
        cout << a->nama << "\n";
    }
}
#endif