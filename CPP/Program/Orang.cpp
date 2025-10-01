#pragma once
#include <iostream>
#include <string>
using namespace std;

//Class Orang untuk simpan data umum orang
class Orang{

    private:
    long long noKtp;
    string nama, alamat, noTelp;

    public:
    //Constructor kosong inisialisasi nilai awal kosong
    Orang(){
        this->noKtp = 0;
        this->nama = "";
        this->alamat = "";
        this->noTelp = "";
    }

    //Constructor dengan parameter untuk buat objek Orang dengan data
    Orang(long long noKtp, string nama, string alamat, string noTelp){
        this->noKtp = noKtp;
        this->nama = nama;
        this->alamat = alamat;
        this->noTelp = noTelp;
    }

    //Getter & Setter untuk setiap atribut
    long long getNoKtp(){
        return noKtp;
    }
    void setNoKtp(long long noKtp){
        this->noKtp = noKtp;
    }

    string getNama(){
        return nama;
    }
    void setNama(string nama){
        this->nama = nama;
    }

    string getAlamat(){
        return alamat;
    }
    void setAlamat(string alamat){
        this->alamat = alamat;
    }

    string getNoTelp(){
        return noTelp;
    }
    void setNoTelp(string noTelp){
        this->noTelp = noTelp;
    }

    //Destruktor
    ~Orang(){}
};