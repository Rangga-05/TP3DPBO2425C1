#pragma once
#include "Orang.cpp"
#include "Kosan.cpp"
#include "Kamar.cpp"
#include <string>
using namespace std;

//Class Penyewa turunan dari orang untuk data penyewa kos
class Penyewa : public Orang{

    private:
    string kodeSewa, tanggalMasuk, jatuhTempo, statusPembayaran;
    Kosan kosan;
    Kamar kamar;

    public:
    //Constructor kosong
    Penyewa() : Orang(){
        this->kodeSewa = "";
        this->tanggalMasuk = "";
        this->jatuhTempo = "";
        this->statusPembayaran = "";
    }

    //Constructor dengan parameter untuk buat penyewa dengan data
    Penyewa(long long noKtp, string nama, string alamat, string noTelp, string kodeSewa, Kosan kosan, Kamar kamar, string tanggalMasuk, string jatuhTempo, string statusPembayaran)
        //Memanggil constructor Orang
        : Orang(noKtp, nama, alamat, noTelp){
            this->kodeSewa = kodeSewa;
            this->kosan = kosan;
            this->kamar = kamar;
            this->tanggalMasuk = tanggalMasuk;
            this->jatuhTempo = jatuhTempo;
            this->statusPembayaran = statusPembayaran;
        }

    //Getter & Setter untuk atribut khusus Penyewa
    string getKodeSewa(){
        return kodeSewa;
    }
    void setKodeSewa(string kodeSewa){
        this->kodeSewa = kodeSewa;
    }

    Kosan getKosan(){
        return kosan;
    }
    void setKosan(Kosan kosan){
        this->kosan = kosan;
    }

    Kamar getKamar(){
        return kamar;
    }
    void setKamar(Kamar kamar){
        this->kamar = kamar;
    }

    string getTanggalMasuk(){
        return tanggalMasuk;
    }
    void setTanggalMasuk(string tanggalMasuk){
        this->tanggalMasuk = tanggalMasuk;
    }

    string getJatuhTempo(){
        return jatuhTempo;
    }
    void setJatuhTempo(string jatuhTempo){
        this->jatuhTempo = jatuhTempo;
    }

    string getStatusPembayaran(){
        return statusPembayaran;
    }
    void setStatusPembayaran(string statusPembayaran){
        this->statusPembayaran = statusPembayaran;
    }

    //Destruktor
    ~Penyewa(){}
};