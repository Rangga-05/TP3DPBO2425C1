import java.util.*;

public class Main{

    //Fungsi cetak data
    public static void cetakData(List<Pemilik> pemilikList, List<Penyewa> penyewaList, List<Kosan> kosanList, String judul){
        System.out.println(judul);

        //Data Pemilik
        System.out.println("\n=== DATA PEMILIK ===");
        for(Pemilik p : pemilikList){//Looping untuk setiap objek Pemilik
            System.out.println(p.getKodePemilik() + " | " + p.getNama() + " | " + p.getAlamat() + " | Telp: " + p.getNoTelp() + " | Kosan: " + p.getKodeKosan() + " | Rek: " + p.getNoRekening());
        }

        //Data Penyewa
        System.out.println("\n=== DATA PENYEWA ===");
        for(Penyewa s : penyewaList){//Looping untuk setiap objek Penyewa
            System.out.println(s.getKodeSewa() + " | " + s.getNama() + " | " + s.getAlamat() + " | Telp: " + s.getNoTelp() + " | Kosan: " + s.getKosan().getKodeKosan() + " | Kamar: " + s.getKamar().getKodeKamar() + " | Tanggal Masuk: " + s.getTanggalMasuk() + " | Jatuh Tempo: " + s.getJatuhTempo() + " | Status: " + s.getStatusPembayaran());
        }

        //Data Kosan
        System.out.println("\n=== DATA KOSAN ===");
        for(Kosan k : kosanList){//Looping untuk setiap objek Kosan
            System.out.println("\nKode Kosan   : " + k.getKodeKosan());
            System.out.println("Nama Kosan   : " + k.getNamaKosan());
            System.out.println("Alamat       : " + k.getAlamatKosan());
            System.out.println("Jumlah Kamar : " + k.getJumlahKamar());

            System.out.println("  >> Daftar Kamar:");
             //For loop untuk tampilin kamar standar
            for(Kamar kamar : k.getListKamar()){
                System.out.println(" - " + kamar.getKodeKamar() + " | Tipe Kamar: " + kamar.getTipeKamar() + " | Rp " + kamar.getHargaKamar() + " | Fasilitas: " + kamar.getFasilitasKamar());
            }

            //For loop untuk tampilin kamar premium
            for(KamarPremium kamar : k.getListKamarPremium()){
                System.out.println(" - " + kamar.getKodeKamar() + " | Tipe Kamar: " + kamar.getTipeKamar() + " | Rp " + (kamar.getHargaKamar() + kamar.getTambahanHarga()) + " | Fasilitas: " + kamar.getFasilitasKamar() + " | Fasilitas Premium: " + kamar.getFasilitasKamarPremium());
            }

            //For loop untuk tampilin fasilitas umum
            System.out.println("  >> Fasilitas Umum (" + k.getListFasilitasUmum().size() + "):");
            for(FasilitasUmum f : k.getListFasilitasUmum()){
                System.out.println("   - " + f.getKodeFasilitasUmum() + " | " + f.getNamaFasilitasUmum());
            }
        }
    }

    public static void main(String[] args){
        //Data Awal
        //Inisialisasi daftar pemilik kosan
        List<Pemilik> pemilikList = new ArrayList<>();
        pemilikList.add(new Pemilik(1111111111L, "Budi Santoso", "Jl. Anggrek No. 7", "081234567890", "KS001", "PK001", "1234567890"));

        //Inisialisasi daftar penyewa kosan
        List<Penyewa> penyewaList = new ArrayList<>();
        penyewaList.add(new Penyewa(4444444444L, "Andi Kick", "Jl. Kenanga No. 9", "081377788899", "PA001",
                new Kosan("KS001", "Kosan Mawar", "Jl. Melati No. 5", 5),
                new Kamar("KM001", "Standar", "3x4", 750000L, "Kosong", "Kamar standar", "Kasur, Lemari"),
                "01-01-2025", "01-02-2025", "Lunas"));

        //Inisialisasi daftar kosan
        List<Kosan> kosanList = new ArrayList<>();
        kosanList.add(new Kosan("KS001", "Kosan Mawar", "Jl. Melati No. 5", 5));

        //Tambah kamar dan fasilitas awal ke kosan pertama
        kosanList.get(0).tambahKamar(new Kamar("KM001", "Standar", "3x4", 750000L, "Kosong", "Kamar standar", "Kasur, Lemari"));
        kosanList.get(0).tambahFasilitasUmum(new FasilitasUmum("F001", "Ruang Tamu"));

        //Cetak data sebelum ditambah
        cetakData(pemilikList, penyewaList, kosanList, "=== DATA SEBELUM DITAMBAHKAN ===");

        //Tambah Data
        //Tambah Pemilik
        pemilikList.add(new Pemilik(2222222222L, "Siti Aminah", "Jl. Melati No. 15", "082345678901", "KS002", "PK002", "9876543210"));
        pemilikList.add(new Pemilik(3333333333L, "Agus Prasetyo", "Jl. Mawar No. 21", "083456789012", "KS002", "PK003", "1122334455"));

        //Tambah Kosan
        kosanList.add(new Kosan("KS002", "Kosan Melati", "Jl. Anggrek No. 11", 5));

        //Tambah Kamar & Fasilitas untuk Kosan Mawar
        kosanList.get(0).tambahKamar(new Kamar("KM002", "Standar", "3x3", 850000L, "Terisi", "Kamar standar dekat dapur", "Kasur, Lemari, Meja"));
        kosanList.get(0).tambahKamar(new KamarPremium("KM003", "4x4", 1500000L, "Kosong", "Kamar premium lantai 2", "Kasur, Lemari, Meja", 250000L, "AC, TV, Kamar Mandi Dalam"));
        kosanList.get(0).tambahKamar(new Kamar("KM004", "Standar", "3x4", 700000L, "Kosong", "Kamar standar lantai 1", "Kasur, Lemari"));
        kosanList.get(0).tambahKamar(new KamarPremium("KM005", "4x5", 1700000L, "Terisi", "Kamar premium balkon", "Kasur, Lemari, Meja", 300000L, "AC, WiFi, TV, Balkon"));

        kosanList.get(0).tambahFasilitasUmum(new FasilitasUmum("F002", "Dapur Bersama"));
        kosanList.get(0).tambahFasilitasUmum(new FasilitasUmum("F003", "Parkiran Motor"));

        //Tambah Kamar & Fasilitas untuk Kosan Melati
        kosanList.get(1).tambahKamar(new Kamar("KM101", "Standar", "3x3", 650000L, "Kosong", "Kamar hemat", "Kasur"));
        kosanList.get(1).tambahKamar(new Kamar("KM102", "Standar", "3x4", 750000L, "Kosong", "Kamar standar", "Kasur, Lemari"));
        kosanList.get(1).tambahKamar(new KamarPremium("KM103", "4x4", 1400000L, "Terisi", "Kamar premium dekat tangga", "Kasur, Lemari, Meja", 200000L, "AC, TV"));
        kosanList.get(1).tambahKamar(new Kamar("KM104", "Standar", "3x4", 800000L, "Kosong", "Kamar standar dekat dapur", "Kasur, Lemari, Meja"));
        kosanList.get(1).tambahKamar(new KamarPremium("KM105", "5x5", 1600000L, "Kosong", "Kamar premium besar", "Kasur, Lemari, Meja", 250000L, "AC, WiFi, Kamar Mandi Dalam"));

        kosanList.get(1).tambahFasilitasUmum(new FasilitasUmum("F101", "Parkiran Mobil"));
        kosanList.get(1).tambahFasilitasUmum(new FasilitasUmum("F102", "Dapur Barengan"));
        kosanList.get(1).tambahFasilitasUmum(new FasilitasUmum("F103", "Ruangan Merokok"));

        //Tambah Penyewa
        penyewaList.add(new Penyewa(5555555555L, "Tita Kemala", "Jl. Flamboyan No. 12", "081366677788", "PA002", kosanList.get(1), kosanList.get(1).getListKamar().get(0), "10-01-2025", "10-02-2025", "Belum Lunas"));
        penyewaList.add(new Penyewa(6666666666L, "Rudi Dunia Bumbu", "Jl. Dahlia No. 3", "081355566677", "PA003", kosanList.get(0), kosanList.get(0).getListKamar().get(2), "15-01-2025", "15-02-2025", "Lunas"));
        penyewaList.add(new Penyewa(7777777777L, "Wili Salim", "Jl. Sakura No. 8", "089347824431", "PA004", kosanList.get(0), kosanList.get(0).getListKamar().get(3), "21-02-2025", "21-03-2025", "Belum Lunas"));
        penyewaList.add(new Penyewa(8888888888L, "Ratna Dewi", "Jl. Kemangi No.13", "089132547689", "PA005", kosanList.get(1), kosanList.get(1).getListKamar().get(2), "19-03-2025", "19-04-2025", "Lunas"));

        //Cetak data sesudah ditambahkan
        cetakData(pemilikList, penyewaList, kosanList, "\n=== DATA SETELAH DITAMBAHKAN ===");
    }
}