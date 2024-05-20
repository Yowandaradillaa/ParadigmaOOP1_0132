#include <iostream>
using namespace std;

#include "Anak.h"
#include "Ibu.h"

int main () {
    Ibu* varIbu = new Ibu ("Dini");
    Ibu* varIbu2 = new Ibu("Novi");
    Anak* varAnak1 = new Anak("Tono");
    Anak* varAnak2 = new Anak("Rini");
    Anak* varAnak3 = new Anak("Dewi");

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu->tambahAnak(varAnak3);
    varIbu->tambahAnak(varAnak1);

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

}