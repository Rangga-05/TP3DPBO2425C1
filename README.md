# TP3DPBO2425C1
TP 3 DPBO Kosan

# Janji
Saya Muhammad Rangga Nur Praditha dengan Nim 2400297 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan

# Diagram
<div style = "text-align: center;">
  <img src = "DiagramKosanTP3.jpg">
</div>

# Deskripsi Desain Diagram dan Class

Pada repositori ini berisi program OOP dalam 3 bahasa yaitu C++, Java, dan Python. Program ini menerapkan konsep Inheritance Lanjutan & Composition dengan 7 class dan Main, diantaranya:

## Diagram
Pada diagram ada beberapa hubungan diantara nya Hierarchical Inheritance, Inheritance, Composition, dan Agregation. <br>
1. Hierarchical Inheritance <br>
Hierarchical Inheritance dipakai pada tiga class yaitu Orang dengan sebagai induk, Pemilik dan Penyewa sebagai turunan. Dalam class Orang berisi hal umum bagi data orang, sedangkan pada class Pemilik berisi hal
yang mengarah kepada pemilik kosan dengan mengambil juga data umum orang, dan class Penyewa berisi hal yang mengarah kepada penyewa kosan dengan mengambil juga data umum orang <br>
2. Inheritance <br>
Inheritance dipakai pada class Kamar dan KamarPremium dengan Kamar sebagai induk, KamarPremium sebagai turunannya, class ini sebagai pembeda untuk kosan kamar standar dan kamar premium yang pastinya berbeda untuk isi fasilitas kamar nya, tetapi tetap mengambil hal umum dari kamar untuk kamar premium <br>
3. Composition <br>
Composition dipakai pada dua class yaitu Kosan dan Kamar, karena kedua class tersebut saling terikat jika salah satu nya hilang, dengan di class Kosan atribut listKamar memegang atribut kodeKamar class Kamar <br>
4. Dependency <br>
Dependency dipakai antara class Penyewa dengan class Kosan, karena dalam class Penyewa terdapat atribut KodeKosan yang bergantung pada data Kosan , karena objek Penyewa membutuhkan informasi dari objek Kosan, namun tidak memilikinya secara permanen
5. Agregation <br>
Agregation dipakai pada beberapa class, yaitu: <br>
1. Class Pemilik dan Kosan karena Pemilik pada atribut kodeKosan mengambil atribut kodeKosan dari Kosan untuk mengetahui pemilik mempunyai kosan yang mana saja <br>
2. Class Penyewa dan Kamar karena Penyewa pada atribut kodeKamar mengambil atribut kodeKamar dari Kamar untuk mengetahui kosan mempunyai kamar apa aja <br>
3. Class Kosan dan FasilitasUmum karena Kosan pada atribut ListFasilitas umum mengambil atribut kodeFasilitasUmum dari FasilitasUmum untuk mengetahui kosan tersebut memiliki fasilitas umum apa saja <br>


## Class
1. Orang <br>
Kelas dasar yang menyimpan atribut umum dari orang seperti NoKTP, Nama, Alamat, dan NoTelp. Kelas ini menjadi induk (Hierarchical Inheritance) untuk kelas Pemilik dan Penyewa <br>
Serta Method Constructor untuk membuat objek Orang, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
2. Pemilik <br>
Kelas turunan dari Orang (Hierarchical Inheritance) yang menambahkan atribut khusus pemilik kosan seperti KodePemilik, KodeKosan dengan agregation class Kosan, dan NoRekening <br>
Serta Method Constructor untuk membuat objek Pemilik, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
3. Penyewa <br>
Kelas turunan dari Orang (Hierarchical Inheritance) yang menambahkan atribut khusus penyewa kosan seperti KodeSewa, KodeKosan dependency dari Kosan, Kamar dengan agregation class Kamar, TanggalMasuk, JatuhTempo, dan StatusPembayaran <br>
Serta Method Constructor untuk membuat objek Penyewa, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
4. Kosan <br>
Kelas yang merepresentasikan data kosan, menyimpan atribut seperti KodeKosan, NamaKosan, AlamatKosan, JumlahKamar, ListKamar dengan composition dari class Kamar, dan ListFasilitasUmum dengan agregation dari class FasilitasUmum. Kelas ini memiliki Composition dengan Kamar dan Agregation dengan FasilitasUmum <br>
Serta Method Constructor untuk membuat objek Kosan, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
5. Kamar <br>
Kelas yang menyimpan data umum kamar, seperti KodeKamar, TipeKamar, LuasKamar, HargaKamar, StatusKamar (Kosong/Terisi), DeskripsiKamar, dan FasilitasKamar <br>
Serta Method Constructor untuk membuat objek Kamar, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
6. KamarPremium <br>
Kelas turunan (Inheritance) dari Kamar yang menambahkan atribut khusus kamar premium, yaitu TambahanHarga dan FasilitasKamarPremium <br>
Serta Method Constructor untuk membuat objek KamarPremium, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
7. FasilitasUmum <br>
Kelas yang menyimpan data fasilitas umum dari kosan, dengan atribut KodeFasilitasUmum dan NamaFasilitasUmum <br>
Serta Method Constructor untuk membuat objek FasilitasUmum, Getter untuk mengambil nilai atribut, Setter untuk mengubah nilai atribut <br>
8. Main <br>
Kelas yang digunakan sebagai program utama untuk membuat objek-objek dari semua kelas di atas, kemudian menampilkan data kosan, daftar kamar dan kamar premium, fasilitas umum, serta data pemilik dan penyewa serta menjalankan program <br>

# Alur Program
Alur program berjalan sebagai berikut: <br>
1. Untuk data awal dibuat semua objek - objek yang di perlukan seperti data Orang, Pemilik, Penyewa, Kosan, Kamar, KamarPremium, FasilitasPremium sesuai dengan parameter yang ada
2. Menambahkan data baru dengan array of object sama seperti data awal tetapi berbeda isi data saja
3. Setelah menambahkan data baru, menampilkan seluruh data pada class sebelum dan sesudah ditambahkan

# Dokumentasi
## CPP
## Python
## Java
