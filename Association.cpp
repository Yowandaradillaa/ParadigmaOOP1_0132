#include <iostream>
#include <vector>
using namespace std;

class Dokter;
class Pasien {
    public :
    string nama;
    vector<Dokter*> daftar_dokter;
    Pasien(string pNama) : nama(pNama){
        cout << "Pasien \"" << nama << "\" ada \n";
    }
};