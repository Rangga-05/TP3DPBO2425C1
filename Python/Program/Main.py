from Pemilik import Pemilik
from Penyewa import Penyewa
from Kosan import Kosan
from Kamar import Kamar
from KamarPremium import KamarPremium
from FasilitasUmum import FasilitasUmum

#Fungsi untuk cetak seluruh data list
def cetakData(pemilikList, penyewaList, kosanList, judul):
    print(judul)
    #Cetak data pemilik
    print("\n=== DATA PEMILIK ===")
    for p in pemilikList:#Looping untuk setiap objek Pemilik
        print(f"{p.getKodePemilik()} | {p.getNama()} | {p.getAlamat()} | Telp: {p.getNoTelp()} | Kosan: {p.getKodeKosan()} | Rek: {p.getNoRekening()}")
    
    #Cetak data penyewa
    print("\n=== DATA PENYEWA ===")
    for s in penyewaList:#Looping untuk setiap objek Penyewa
        print(f"{s.getKodeSewa()} | {s.getNama()} | {s.getAlamat()} | Telp: {s.getNoTelp()} | "
              f"Kosan: {s.getKosan()} | Kamar: {s.getKamar()} | "
              f"Tanggal Masuk: {s.getTanggalMasuk()} | Jatuh Tempo: {s.getJatuhTempo()} | Status: {s.getStatusPembayaran()}")
    
    #Cetak data kosan
    print("\n=== DATA KOSAN ===")
    for kosan in kosanList:#Looping untuk setiap objek Kosan
        print(f"\nKode Kosan   : {kosan.getKodeKosan()}")
        print(f"Nama Kosan   : {kosan.getNamaKosan()}")
        print(f"Alamat       : {kosan.getAlamatKosan()}")
        print(f"Jumlah Kamar : {kosan.getJumlahKamar()}")
    
        #Menampilkan daftar kamar standar
        print("  >> Daftar Kamar:")
        for kamar in kosan.getListKamar():
            #Menampilkan daftar kamar premium
            if kamar.getTipeKamar() == "Premium":
                print(f"   - {kamar.getKodeKamar()} | Rp {kamar.getHargaKamar() + kamar.getTambahanHarga()} "
                      f"| Tipe Kamar: {kamar.getTipeKamar()} "
                      f"| Fasilitas: {kamar.getFasilitasKamar()} "
                      f"| Fasilitas Premium: {kamar.getFasilitasKamarPremium()}")
            else:
            #Menampilkan daftar kamar standar
                print(f"   - {kamar.getKodeKamar()} | Rp {kamar.getHargaKamar()} "
                      f"| Tipe Kamar: {kamar.getTipeKamar()} "
                      f"| Fasilitas: {kamar.getFasilitasKamar()}")

        #Menampilkan daftar fasilitas umum
        print(f"  >> Fasilitas Umum ({len(kosan.getListFasilitasUmum())}):")
        for fasilitas in kosan.getListFasilitasUmum():
            print(f"   - {fasilitas.getKodeFasilitasUmum()} | {fasilitas.getNamaFasilitasUmum()}")


def main():
    #Data awal
    pemilikList = [
        Pemilik("1111111111", "Budi Santoso", "Jl. Anggrek No. 7", "081234567890", "KS001", "PK001", "1234567890")
    ]
    penyewaList = [
        Penyewa("4444444444", "Andi Kick", "Jl. Kenanga No. 9", "081377788899", "PA001", "KS001", "KM001", "01-01-2025", "01-02-2025", "Lunas")
    ]
    kosanList = [
        Kosan("KS001", "Kosan Mawar", "Jl. Melati No. 5", 5),
    ]

    #Tambah kamar dan fasilitas awal
    kosanList[0].TambahKamar(Kamar("KM001", "Standar", "3x4", 750000, "Kosong", "Kamar standar", "Kasur, Lemari"))
    kosanList[0].TambahFasilitasUmum(FasilitasUmum("F001", "Ruang Tamu"))

    #Cetak data sebelum ditambah
    cetakData(pemilikList, penyewaList, kosanList, "=== DATA SEBELUM DITAMBAHKAN ===")

    #Tambah data
    #Tambah Pemilik
    pemilikList.append(Pemilik("2222222222", "Siti Aminah", "Jl. Melati No. 15", "082345678901", "KS002", "PK002", "9876543210"))
    pemilikList.append(Pemilik("3333333333", "Agus Prasetyo", "Jl. Mawar No. 21", "083456789012", "KS002", "PK003", "1122334455"))

    #Tambah Penyewa
    penyewaList.append(Penyewa("5555555555", "Tita Kemala", "Jl. Flamboyan No. 12", "081366677788", "PA002", "KS002", "KM101", "10-01-2025", "10-02-2025", "Belum Lunas"))
    penyewaList.append(Penyewa("6666666666", "Rudi Dunia Bumbu", "Jl. Dahlia No. 3", "081355566677", "PA003", "KS001", "KM003", "15-01-2025", "15-02-2025", "Lunas"))
    penyewaList.append(Penyewa("7777777777", "Wili Salim", "Jl. Sakura No. 8", "089347824431", "PA004", "KS001", "KM004", "21-02-2025", "21-03-2025", "Belum Lunas"))
    penyewaList.append(Penyewa("8888888888", "Ratna Dewi", "Jl. Kemangi No.13", "089132547689", "PA005", "KS002", "KM103", "19-03-2025", "19-04-2025", "Lunas"))

    #Tambah Kosan
    kosanList.append(Kosan("KS002", "Kosan Melati", "Jl. Anggrek No. 11", 5))

    #Tambah Kamar & Fasilitas untuk Kosan Mawar
    kosanList[0].TambahKamar(Kamar("KM002", "Standar", "3x3", 850000, "Terisi", "Kamar standar dekat dapur", "Kasur, Lemari, Meja"))
    kosanList[0].TambahKamar(KamarPremium("KM003", "4x4", 1500000, "Kosong", "Kamar premium lantai 2", "Kasur, Lemari, Meja", 250000, "AC, TV, Kamar Mandi Dalam"))
    kosanList[0].TambahKamar(Kamar("KM004", "Standar", "3x4", 700000, "Kosong", "Kamar standar lantai 1", "Kasur, Lemari"))
    kosanList[0].TambahKamar(KamarPremium("KM005", "4x5", 1700000, "Terisi", "Kamar premium balkon", "Kasur, Lemari, Meja", 300000, "AC, WiFi, TV, Balkon"))

    kosanList[0].TambahFasilitasUmum(FasilitasUmum("F002", "Dapur Bersama"))
    kosanList[0].TambahFasilitasUmum(FasilitasUmum("F003", "Parkiran Motor"))

    #Tambah Kamar & Fasilitas untuk Kosan Melati
    kosanList[1].TambahKamar(Kamar("KM101", "Standar", "3x3", 650000, "Kosong", "Kamar hemat", "Kasur"))
    kosanList[1].TambahKamar(Kamar("KM102", "Standar", "3x4", 750000, "Kosong", "Kamar standar", "Kasur, Lemari"))
    kosanList[1].TambahKamar(KamarPremium("KM103", "4x4", 1400000, "Terisi", "Kamar premium dekat tangga", "Kasur, Lemari, Meja", 200000, "AC, TV"))
    kosanList[1].TambahKamar(Kamar("KM104", "Standar", "3x4", 800000, "Kosong", "Kamar standar dekat dapur", "Kasur, Lemari, Meja"))
    kosanList[1].TambahKamar(KamarPremium("KM105", "5x5", 1600000, "Kosong", "Kamar premium besar", "Kasur, Lemari, Meja", 250000, "AC, WiFi, Kamar Mandi Dalam"))

    kosanList[1].TambahFasilitasUmum(FasilitasUmum("F101", "Parkiran Mobil"))
    kosanList[1].TambahFasilitasUmum(FasilitasUmum("F102", "Dapur Barengan"))
    kosanList[1].TambahFasilitasUmum(FasilitasUmum("F103", "Ruangan Merokok"))

    #Cetak data sesudah ditambahkan
    cetakData(pemilikList, penyewaList, kosanList, "\n=== DATA SETELAH DITAMBAHKAN ===")


if __name__ == "__main__":
    main()