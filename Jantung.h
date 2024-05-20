#ifndef JANTUNG_H
#define JANTUNG_H

#include <iostream>
using namespace std;

class Jantung {
    public :
    Jantung(){
        cout << "Jantung dihidupkan\n";
    }
    ~Jantung() {
        cout << "Jantung dimatikan\n";
    }
};