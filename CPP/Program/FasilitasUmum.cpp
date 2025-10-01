#pragma once
#include <string>
using namespace std;

//Class FasilitasUmum untuk simpan data fasilitas
class FasilitasUmum{

    private:
    string kodeFasilitasUmum, namaFasilitasUmum;

    public:
    //Constructor kosong
    FasilitasUmum(){
        this->kodeFasilitasUmum = "";
        this->namaFasilitasUmum = "";
    }

    //Constructor dengan parameter untuk buat FasilitasUmum dengan data
    FasilitasUmum(string kodeFasilitasUmum, string namaFasilitasUmum){
        this->kodeFasilitasUmum = kodeFasilitasUmum;
        this->namaFasilitasUmum = namaFasilitasUmum;
    }

    //Getter & Setter untuk setiap atribut
    string getKodeFasilitasUmum(){
        return kodeFasilitasUmum;
    }
    void setKodeFasilitasUmum(string kodeFasilitasUmum){
        this->kodeFasilitasUmum = kodeFasilitasUmum;
    }

    string getNamaFasilitasUmum(){
        return namaFasilitasUmum;
    }
    void setNamaFasilitasUmum(string namaFasilitasUmum){
        this->namaFasilitasUmum = namaFasilitasUmum;
    }

    //Destruktor
    ~FasilitasUmum(){}
};