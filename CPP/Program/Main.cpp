#include <iostream>
#include <vector>
#include "Pemilik.cpp"
#include "Penyewa.cpp"
#include "Kosan.cpp"
#include "Kamar.cpp"
#include "KamarPremium.cpp"
#include "FasilitasUmum.cpp"
using namespace std;

//Fungsi untuk cetak seluruh data
void cetakData(vector<Pemilik> pemilikList, vector<Penyewa> penyewaList, vector<Kosan> kosanList, string judul){
    cout << judul << endl;

    //Data Pemilik
    cout << "\n=== DATA PEMILIK ===\n";
    for(Pemilik p : pemilikList){//Looping untuk setiap objek Pemilik
        cout << p.getKodePemilik() << " | " << p.getNama() << " | " << p.getAlamat()
             << " | Telp: " << p.getNoTelp()
             << " | Kosan: " << p.getKodeKosan()
             << " | Rek: " << p.getNoRekening() << endl;
    }

    //Data Penyewa
    cout << "\n=== DATA PENYEWA ===\n";
    for(Penyewa s : penyewaList){//Looping untuk setiap objek Penyewa
        cout << s.getKodeSewa() << " | " << s.getNama() << " | " << s.getAlamat()
             << " | Telp: " << s.getNoTelp()
             << " | Kosan: " << s.getKosan().getKodeKosan()
             << " | Kamar: " << s.getKamar().getKodeKamar()
             << " | Tanggal Masuk: " << s.getTanggalMasuk()
             << " | Jatuh Tempo: " << s.getJatuhTempo()
             << " | Status: " << s.getStatusPembayaran() << endl;
    }

    //Data Kosan
    cout << "\n=== DATA KOSAN ===\n";
    for(Kosan k : kosanList){//Looping untuk setiap objek Kosan
        cout << "\nKode Kosan   : " << k.getKodeKosan() << endl;
        cout << "Nama Kosan   : " << k.getNamaKosan() << endl;
        cout << "Alamat       : " << k.getAlamatKosan() << endl;
        cout << "Jumlah Kamar : " << k.getJumlahKamar() << endl;

        cout << "  >> Daftar Kamar:\n";
        //Menampilkan daftar kamar standar
        for(Kamar kamar : k.getListKamar()){
            cout << " - " << kamar.getKodeKamar()
                 << " | Tipe Kamar: " << kamar.getTipeKamar()
                 << " | Rp " << kamar.getHargaKamar()
                 << " | Fasilitas: " << kamar.getFasilitasKamar()
                 << endl;
        }

        //Menampilkan daftar kamar premium
        for(KamarPremium kamar : k.getListKamarPremium()){
            cout << " - " << kamar.getKodeKamar()
                 << " | Tipe Kamar: " << kamar.getTipeKamar()
                 << " | Rp " << kamar.getHargaKamar() + kamar.getTambahanHarga()
                 << " | Fasilitas: " << kamar.getFasilitasKamar()
                 << " | Fasilitas Premium: " << kamar.getFasilitasKamarPremium()
                 << endl;
        }

        //Menampilkan daftar fasilitas umum
        cout << "  >> Fasilitas Umum (" << k.getListFasilitasUmum().size() << "):\n";
        for(FasilitasUmum f : k.getListFasilitasUmum()){
            cout << "   - " << f.getKodeFasilitasUmum() << " | " << f.getNamaFasilitasUmum() << endl;
        }
    }
}

int main(){
    //Data awal
    //Inisialisasi daftar pemilik kosan
    vector<Pemilik> pemilikList = {
        Pemilik(1111111111, "Budi Santoso", "Jl. Anggrek No. 7", "081234567890", "KS001", "PK001", "1234567890")
    };

    //Inisialisasi daftar penyewa kosan
    vector<Penyewa> penyewaList = {
        Penyewa(4444444444, "Andi Kick", "Jl. Kenanga No. 9", "081377788899", "PA001",
        Kosan("KS001", "Kosan Mawar", "Jl. Melati No. 5", 5),
        Kamar("KM001", "Standar", "3x4", 750000, "Kosong", "Kamar standar", "Kasur, Lemari"),
        "01-01-2025", "01-02-2025", "Lunas")
    };

    //Inisialisasi daftar kosan
    vector<Kosan> kosanList = {
        Kosan("KS001", "Kosan Mawar", "Jl. Melati No. 5", 5)
    };

    //Tambah kamar dan fasilitas awal ke kosan pertama
    kosanList[0].TambahKamar(Kamar("KM001", "Standar", "3x4", 750000, "Kosong", "Kamar standar", "Kasur, Lemari"));
    kosanList[0].TambahFasilitasUmum(FasilitasUmum("F001", "Ruang Tamu"));

    //Cetak data sebelum ditambah
    cetakData(pemilikList, penyewaList, kosanList, "=== DATA SEBELUM DITAMBAHKAN ===");

    //Tambah data
    //Tambah Pemilik
    pemilikList.push_back(Pemilik(2222222222, "Siti Aminah", "Jl. Melati No. 15", "082345678901", "KS002", "PK002", "9876543210"));
    pemilikList.push_back(Pemilik(3333333333, "Agus Prasetyo", "Jl. Mawar No. 21", "083456789012", "KS002", "PK003", "1122334455"));

    //Tambah Kosan
    kosanList.push_back(Kosan("KS002", "Kosan Melati", "Jl. Anggrek No. 11", 5));

    //Tambah Kamar & Fasilitas untuk Kosan Mawar
    kosanList[0].TambahKamar(Kamar("KM002", "Standar", "3x3", 850000, "Terisi", "Kamar standar dekat dapur", "Kasur, Lemari, Meja"));
    kosanList[0].TambahKamar(KamarPremium("KM003", "4x4", 1500000, "Kosong", "Kamar premium lantai 2", "Kasur, Lemari, Meja", 250000, "AC, TV, Kamar Mandi Dalam"));
    kosanList[0].TambahKamar(Kamar("KM004", "Standar", "3x4", 700000, "Kosong", "Kamar standar lantai 1", "Kasur, Lemari"));
    kosanList[0].TambahKamar(KamarPremium("KM005", "4x5", 1700000, "Terisi", "Kamar premium balkon", "Kasur, Lemari, Meja", 300000, "AC, WiFi, TV, Balkon"));

    kosanList[0].TambahFasilitasUmum(FasilitasUmum("F002", "Dapur Bersama"));
    kosanList[0].TambahFasilitasUmum(FasilitasUmum("F003", "Parkiran Motor"));

    //Tambah Kamar & Fasilitas untuk Kosan Melati
    kosanList[1].TambahKamar(Kamar("KM101", "Standar", "3x3", 650000, "Kosong", "Kamar hemat", "Kasur"));
    kosanList[1].TambahKamar(Kamar("KM102", "Standar", "3x4", 750000, "Kosong", "Kamar standar", "Kasur, Lemari"));
    kosanList[1].TambahKamar(KamarPremium("KM103", "4x4", 1400000, "Terisi", "Kamar premium dekat tangga", "Kasur, Lemari, Meja", 200000, "AC, TV"));
    kosanList[1].TambahKamar(Kamar("KM104", "Standar", "3x4", 800000, "Kosong", "Kamar standar dekat dapur", "Kasur, Lemari, Meja"));
    kosanList[1].TambahKamar(KamarPremium("KM105", "5x5", 1600000, "Kosong", "Kamar premium besar", "Kasur, Lemari, Meja", 250000, "AC, WiFi, Kamar Mandi Dalam"));

    kosanList[1].TambahFasilitasUmum(FasilitasUmum("F101", "Parkiran Mobil"));
    kosanList[1].TambahFasilitasUmum(FasilitasUmum("F102", "Dapur Barengan"));
    kosanList[1].TambahFasilitasUmum(FasilitasUmum("F103", "Ruangan Merokok"));

    //Tambah Penyewa
    penyewaList.push_back(Penyewa(5555555555, "Tita Kemala", "Jl. Flamboyan No. 12", "081366677788", "PA002", kosanList[1], kosanList[1].getListKamar()[0], "10-01-2025", "10-02-2025", "Belum Lunas"));
    penyewaList.push_back(Penyewa(6666666666, "Rudi Dunia Bumbu", "Jl. Dahlia No. 3", "081355566677", "PA003", kosanList[0], kosanList[0].getListKamar()[2], "15-01-2025", "15-02-2025", "Lunas"));
    penyewaList.push_back(Penyewa(7777777777, "Wili Salim", "Jl. Sakura No. 8", "089347824431", "PA004", kosanList[0], kosanList[0].getListKamar()[3], "21-02-2025", "21-03-2025", "Belum Lunas"));
    penyewaList.push_back(Penyewa(8888888888, "Ratna Dewi", "Jl. Kemangi No.13", "089132547689", "PA005", kosanList[1], kosanList[1].getListKamar()[2], "19-03-2025", "19-04-2025", "Lunas"));

    //Cetak data sesudah ditambahkan
    cetakData(pemilikList, penyewaList, kosanList, "\n=== DATA SETELAH DITAMBAHKAN ===");

    return 0;
}