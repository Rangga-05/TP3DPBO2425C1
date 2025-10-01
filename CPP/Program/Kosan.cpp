#pragma once
#include <vector>
#include "Kamar.cpp"
#include "KamarPremium.cpp"
#include "FasilitasUmum.cpp"
using namespace std;

//Class Kosan untuk simpan data kosan, daftar kamar dan fasilitas
class Kosan{

    private:
    int jumlahKamar;
    string kodeKosan, namaKosan, alamatKosan;
    vector<Kamar> listKamar;
    vector<KamarPremium> listKamarPremium;
    vector<FasilitasUmum> listFasilitasUmum;

    public:
    //Constructor kosong
    Kosan(){
        this->kodeKosan = "";
        this->namaKosan = "";
        this->alamatKosan = "";
        this->jumlahKamar = 0;
    }

    //Constructor dengan parameter untuk buat Kosan dengan data
    Kosan(string kodeKosan, string namaKosan, string alamatKosan, int jumlahKamar){
        this->kodeKosan = kodeKosan;
        this->namaKosan = namaKosan;
        this->alamatKosan = alamatKosan;
        this->jumlahKamar = jumlahKamar;
    }

    string getKodeKosan(){
        return kodeKosan;
    }
    void setKodeKosan(string kodeKosan){
        this->kodeKosan = kodeKosan;
    }

    string getNamaKosan(){
        return namaKosan;
    }
    void setNamaKosan(string namaKosan){
        this->namaKosan = namaKosan;
    }

    string getAlamatKosan(){
        return alamatKosan;
    }
    void setAlamatKosan(string alamatKosan){
        this->alamatKosan = alamatKosan;
    }

    int getJumlahKamar(){
        return jumlahKamar;
    }
    void setJumlahKamar(int jumlahKamar){
        this->jumlahKamar = jumlahKamar;
    }

    //Method untuk tambah data ke list
    vector<Kamar> getListKamar(){
        return listKamar;
    }
    void TambahKamar(Kamar k){
        listKamar.push_back(k);
    }

    vector<KamarPremium> getListKamarPremium(){
        return listKamarPremium;
    }
    void TambahKamarPremium(KamarPremium kp){
        listKamarPremium.push_back(kp);
    }

    vector<FasilitasUmum> getListFasilitasUmum(){
        return listFasilitasUmum;
    }
    void TambahFasilitasUmum(FasilitasUmum f){
        listFasilitasUmum.push_back(f);
    }

    //Destruktor
    ~Kosan(){}
};