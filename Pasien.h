#ifndef PASIEN_H
#define PASIEN_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Pasien {
    public:
    string nama;
    vector<Pasien*>daftar_dokter;

    Pasien (string pNama) : nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada \n";
    }
    ~Pasien (){
        cout << "Pasien \"" << nama << "\" tidak ada \n";
    }
    void tambahAnak(Dokter*);
    void cetakAnak();
};

void Ibu::cetakAnak(){
    cout << "Daftar anak dari ibu\"" << this->nama << "\":\n";
    for (auto& a :daftar_anak) {
        cout << a->nama << "\n";
    }
}
#endif