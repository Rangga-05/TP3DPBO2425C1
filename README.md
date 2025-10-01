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
Kelas dasar yang menyimpan atribut umum dari orang diantaranya: <br>
- NoKTP (long): Nomor Ktp orang tersebut<br>
- Nama (string): Nama orang tersebut <br>
- Alamat (string): Alamat asal orang tersebut <br>
- NoTelp (string): Nomor Telepon orang tersebut <br>
Kelas ini menjadi induk (Hierarchical Inheritance) untuk kelas Pemilik dan Penyewa <br>
Serta Method: <br>
- Constructor untuk membuat objek Orang <br>
- Getter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
2. Pemilik <br>
Kelas turunan dari Orang (Hierarchical Inheritance) yang menambahkan atribut khusus pemilik kosan diantaranya:
- KodePemilik (string): Kode milik pemilik yang punya kosan <br>
- KodeKosan (string): Kode kosan yang dimiliki oleh pemilik <br>
- NoRekening (string): Nomor rekening yang dimilik pemilik<br>
Serta Method: <br>
- Constructor untuk membuat objek Pemilik <br>
- Getter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
4. Penyewa <br>
Kelas turunan dari Orang (Hierarchical Inheritance) yang menambahkan atribut khusus penyewa kosan diantarnya:
- KodeSewa (string): Kode sewa dari penyewa <br>
- KodeKosan (string): Kode kosan dari tempat kosan penyewa <br>
- Kamar (string): Kode kamar dari tempat kamar penyewa <br>
- TanggalMasuk (string): Tanggal awal masuk penyewa <br>
- JatuhTempo (string): Tanggal jatuh tempo penyewa <br>
- StatusPembayaran (string): Lunas atau belumnya pembayaran penyewa <br>
Serta Method:
- Constructor untuk membuat objek Penyewa <br>
- Getter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
5. Kosan <br>
Kelas yang merepresentasikan data kosan, menyimpan atribut diantaranya:
- KodeKosan (string): Kode kosan untuk setiap kosan <br>
- NamaKosan (string): Nama kosan untuk setiap kosan <br>
- AlamatKosan (string): Alamat kosan untuk setiap kosan <br>
- JumlahKamar (string): Jumlah kamar pada kosan tersebut <br>
- ListKamar (string): List kamar yang ada pada kosan tersebut <br>
- ListFasilitasUmum (string): List fasilitas umum yang ada pada kosan tersebut <br>
Kelas ini memiliki Composition dengan Kamar dan Agregation dengan FasilitasUmum <br>
Serta Method:
- Constructor untuk membuat objek Kosan <br>
- Getter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
6. Kamar <br>
Kelas yang menyimpan data umum kamar diantaranya:
- KodeKamar (string): Kode dari kamar tersebut<br>
- TipeKamar (string): Tipe dari kamar tersebut<br>
- LuasKamar (string): Luas dari kamar tersebut <br>
- HargaKamar (int): Harga dari kamar tersebut <br>
- StatusKamar (Kosong/Terisi) (string): Status dari kamar tersebut apakah terisi atau tidak <br>
- DeskripsiKamar (string): Deskripsi dari kamar tersebut <br>
- FasilitasKamar (string): Fasilitas dari kamar tersebut <br>
Serta Method: <br>
- Constructor untuk membuat objek Kamar <br>
- Getter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
7. KamarPremium <br>
Kelas turunan (Inheritance) dari Kamar yang menambahkan atribut khusus kamar premium diantaranya:
- TambahanHarga (int): Tambahan harga untuk kamar premium<br>
- FasilitasKamarPremium (String): Fasilitas tambahan untuk kamar premium <br>
Serta Method: <br>
- Constructor untuk membuat objek Kamar <br>
- PremiumGetter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
8. FasilitasUmum <br>
Kelas yang menyimpan data fasilitas umum dari kosan, dengan atribut diantaranya: <br>
- KodeFasilitasUmum (string): Kode untuk fasilitas umum pada kosan <br>
- NamaFasilitasUmum (string): Nama fasilitas umum pada kosan tersebut <br>
Serta Method: <br>
- Constructor untuk membuat objek FasilitasUmum <br>
- Getter untuk mengambil nilai atribut <br>
- Setter untuk mengubah nilai atribut <br>
9. Main <br>
Kelas yang digunakan sebagai program utama untuk membuat objek-objek dari semua kelas di atas, kemudian menampilkan data kosan, daftar kamar dan kamar premium, fasilitas umum, serta data pemilik dan penyewa serta menjalankan program <br>

# Alur Program
Alur program berjalan sebagai berikut: <br>
1. Untuk data awal dibuat semua objek - objek yang di perlukan seperti data Orang, Pemilik, Penyewa, Kosan, Kamar, KamarPremium, FasilitasPremium sesuai dengan parameter yang ada <br>
2. Menambahkan data baru dengan array of object sama seperti data awal tetapi berbeda isi data saja <br>
3. Setelah menambahkan data baru, menampilkan seluruh data pada class sebelum dan sesudah ditambahkan <br>

# Dokumentasi
Untuk dokumentasi antara CPP, Python, dan Java memiliki hasil yang sama
## CPP
<div>
  <img src = "CPP/Dokumentasi/CPP1.png" style= "width: 49%;">
  <img src = "CPP/Dokumentasi/CPP2.png" style= "width: 49%;">
</div>

## Python
<div>
  <img src = "Python/Dokumentasi/Python1.png" style= "width: 49%;">
  <img src = "Python/Dokumentasi/Python2.png" style= "width: 49%;">
</div>

## Java
<div>
  <img src = "Java/Dokumentasi/Java1.png" style= "width: 49%;">
  <img src = "Java/Dokumentasi/Java2.png" style= "width: 49%;">
</div>
