#ifndef IBU_H
#define IBU_H
#include <vector>

#include <iostream>
#include <string>


class Ibu {
    public:
    string nama;
    vector<Anak*> daftar_anak;

    ibu (string pNama) : nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada \n";
    }
    ~Ibu (){
        cout << "Ibu \"" << nama << "\" tidak ada \n";
    }
    void tambahAnak(Anak*);
    void cetakAnak();
};
#endif