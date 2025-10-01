#pragma once
#include "Orang.cpp"
#include <string>
using namespace std;

//Class Pemilik turunan dari orang untuk data pemilik kos
class Pemilik : public Orang{

    private:
    string kodePemilik, kodeKosan, noRekening;

    public:
    //Constructor kosong
    Pemilik() : Orang(){
        this->kodePemilik = "";
        this->kodeKosan = "";
        this->noRekening = "";
    }

    //Constructor dengan parameter untuk buat pemilik dengan data
    Pemilik(long long noKtp, string nama, string alamat, string noTelp, string kodePemilik, string kodeKosan, string noRekening)
        //Memanggil constructor Orang
        : Orang(noKtp, nama, alamat, noTelp){
            this->kodePemilik = kodePemilik;
            this->kodeKosan = kodeKosan;
            this->noRekening = noRekening;
        }

    //Getter & Setter untuk atribut khusus Pemilik
    string getKodePemilik(){
        return kodePemilik;
    }
    void setKodePemilik(string kodePemilik){
        this->kodePemilik = kodePemilik;
    }

    string getKodeKosan(){
        return kodeKosan;
    }
    void setKodeKosan(string kodeKosan){
        this->kodeKosan = kodeKosan;
    }

    string getNoRekening(){
        return noRekening;
    }
    void setNoRekening(string noRekening){
        this->noRekening = noRekening;
    }

    //Destruktor
    ~Pemilik(){}
};