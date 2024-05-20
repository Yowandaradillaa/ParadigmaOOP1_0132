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
    void tambahDokter(Dokter*);
    void cetakDokter();
};

void Pasien::cetakDokter(){
    cout << "Daftar dokter dari pasien \"" << this->nama << "\":\n";
    for (auto& a :daftar_dokter) {
        cout << a->nama << "\n";
    }
}
#endif