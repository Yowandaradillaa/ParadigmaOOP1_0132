#ifndef IBU_H
#define IBU_H
#include <vector>

#include <iostream>
#include <string>
using namespace std;


class Ibu {
    public:
    string nama;
    vector<Anak*>daftar_anak;

    Ibu (string pNama) : nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada \n";
    }
    ~Ibu (){
        cout << "Ibu \"" << nama << "\" tidak ada \n";
    }
    void tambahAnak(Anak*);
    void cetakAnak();
};

void Ibu::cetakAnak(){
    cout << "Daftar anak dari ibu\"" << this->nama << "\":\n";
    for (auto& a :daftar_anak) {
        cout << a->nama << "\n";
    }
}
#endif