#ifndef DOKTER_H
#define DOKTER_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Dokter {
    public:
    string nama;
    vector<Dokter*>daftar_pasien;

    Dokter (string pNama) : nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada \n";
    }
    ~Dokter (){
        cout << "Dokter \"" << nama << "\" tidak ada \n";
    }
    void tambahPasien(Pasien*);
    void cetakPasien();
};

void Dokter::cetakPasien(){
    cout << "Daftar Pasien dari dokter\"" << this->nama << "\":\n";
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }
}
#endif