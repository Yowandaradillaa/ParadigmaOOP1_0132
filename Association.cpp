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
    ~Pasien (){
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(Dokter*);
    void cetakDokter();
};

class Dokter {
    public :
    string nama;
    vector<Pasien*> daftar_pasien;

    Dokter (string pNama) : nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada \n";
    }
    ~Dokter(){
        cout << "Dokter \"" << nama << "\"tidak ada \n";
    }
    void tambahPasien(Pasien*);
    void cetakPasien();
};

void Pasien::tambahDokter(Dokter* pDokter){
    daftar_dokter.push_back(pDokter);
}

void Pasien::cetakDokter() {
    cout << "Daftar dokter yang menangani pasien \"" << this->nama << "\" : \n";
    for (auto& a :daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main () {
    Dokter* varDokter1 = new Dokter("dr.Budi");
    Dokter* varDokter2 = new Dokter("dr.Tono");
    Pasien* varPasien1 = new Pasien("Andi");
    Pasien* varPasien2 = new Pasien("Lia");

    varDokter1->cetakPasien();
    varDokter2->cetakPasien();
    varPasien1->cetakDokter();
    varPasien2->cetakDokter();

    delete varPasien1;
    delete varPasien2;
    delete varDokter1;
    delete varDokter2;

    return 0;

}