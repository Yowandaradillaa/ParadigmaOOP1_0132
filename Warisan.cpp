#include <iostream>
#include <string>
using namespace std;

class Orang {
    public:
    string nama;
    
    Orang(string pNama) :
    nama (pNama) {
        cout << "Orang dibuat\n" << endl;
    }
    ~Orang() {
        cout << "Oraang dihapus\n" << endl;
    }
    int jumlah(int a, int b) {
        return a + b;
    }
};

class Pelajar : public orang {
    public :
    string sekolah;

    Pelajar(string pNama, string pSekolah) : Orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dihapus\n" << endl;
    }
    string perkenalan() {
        return "Hallo, nama saya" + nama + "dari sekolah" + sekolah + "\n\n";
    }
};

int main() {
    Pelajar siswa1("Andi Lakson", "SMAN 1 BANTUL");
    cout << siswa1.perkenalan();
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}