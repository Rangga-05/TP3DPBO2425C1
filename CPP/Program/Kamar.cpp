#pragma once
#include <string>
using namespace std;

//Class Kamar untuk simpan data kamar kos
class Kamar{
    
    private:
    int hargaKamar;
    string kodeKamar, tipeKamar, luasKamar, statusKamar, deskripsiKamar, fasilitasKamar;

    public:
    Kamar(){
        //Constructor kosong
        this->kodeKamar = "";
        this->tipeKamar = "";
        this->luasKamar = "";
        this->hargaKamar = 0;
        this->statusKamar = "";
        this->deskripsiKamar = "";
        this->fasilitasKamar = "";
    }

    //Constructor dengan parameter untuk buat Kamar dengan data
    Kamar(string kodeKamar, string tipeKamar, string luasKamar, int hargaKamar, string statusKamar, string deskripsiKamar, string fasilitasKamar){
        this->kodeKamar = kodeKamar;
        this->tipeKamar = tipeKamar;
        this->luasKamar = luasKamar;
        this->hargaKamar = hargaKamar;
        this->statusKamar = statusKamar;
        this->deskripsiKamar = deskripsiKamar;
        this->fasilitasKamar = fasilitasKamar;
    }

    //Getter & Setter untuk setiap atribut
    string getKodeKamar(){
        return kodeKamar;
    }
    void setKodeKamar(string kodeKamar){
        this->kodeKamar = kodeKamar;
    }

    string getTipeKamar(){
        return tipeKamar;
    }
    void setTipeKamar(string tipeKamar){
        this->tipeKamar = tipeKamar;
    }

    string getLuasKamar(){
        return luasKamar;
    }
    void setLuasKamar(string luasKamar){
        this->luasKamar = luasKamar;
    }

    int getHargaKamar(){
        return hargaKamar;
    }
    void setHargaKamar(int hargaKamar){
        this->hargaKamar = hargaKamar;
    }

    string getStatusKamar(){
        return statusKamar;
    }
    void setStatusKamar(string statusKamar){
        this->statusKamar = statusKamar;
    }

    string getDeskripsiKamar(){
        return deskripsiKamar;
    }
    void setDeskripsiKamar(string deskripsiKamar){
        this->deskripsiKamar = deskripsiKamar;
    }

    string getFasilitasKamar(){
        return fasilitasKamar;
    }
    void setFasilitasKamar(string fasilitasKamar){
        this->fasilitasKamar = fasilitasKamar;
    }

    //Destruktor
    ~Kamar(){}
};