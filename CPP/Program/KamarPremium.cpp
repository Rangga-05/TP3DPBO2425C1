#pragma once
#include "Kamar.cpp"
#include <string>
using namespace std;

//Class KamarPremium turunan dari Kamar, khusus untuk kamar premium dengan atribut
class KamarPremium : public Kamar{

    private:
    int tambahanHarga;
    string fasilitasKamarPremium;

    public:
    //Constructor kosong
    KamarPremium() : Kamar(){
        this->tambahanHarga = 0;
        this->fasilitasKamarPremium = "";
    }

    //Constructor dengan parameter untuk buat KamarPremium dengan data
    KamarPremium(string kodeKamar, string luasKamar, int hargaKamar, string statusKamar, string deskripsiKamar, string fasilitasKamar, int tambahanHarga, string fasilitasKamarPremium)
        //Memanggil constructor Kamar
        : Kamar(kodeKamar, "Premium", luasKamar, hargaKamar, statusKamar, deskripsiKamar, fasilitasKamar){
            this->tambahanHarga = tambahanHarga;
            this->fasilitasKamarPremium = fasilitasKamarPremium;
        }

    //Getter & Setter untuk atribut khusus KamarPremium
    int getTambahanHarga(){
        return tambahanHarga;
    }
    void setTambahanHarga(int tambahanHarga){
        this->tambahanHarga = tambahanHarga;
    }

    string getFasilitasKamarPremium(){
        return fasilitasKamarPremium;
    }
    void setFasilitasKamarPremium(string fasilitasKamarPremium){
        this->fasilitasKamarPremium = fasilitasKamarPremium;
    }

    //Destruktor
    ~KamarPremium(){}
};