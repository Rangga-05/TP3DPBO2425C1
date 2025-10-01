from Kamar import Kamar
from FasilitasUmum import FasilitasUmum

#Class Kosan untuk simpan informasi kos
class Kosan():
    def __init__(self, kodeKosan, namaKosan, alamatKosan, jumlahKamar):
        self._kodeKosan = kodeKosan
        self._namaKosan = namaKosan
        self._alamatKosan = alamatKosan
        self._jumlahKamar = jumlahKamar
        self._listKamar = []            #Daftar kamar kosan
        self._listFasilitasUmum = []    #Daftar fasilitas umum

    #Getter & Setter untuk akses dan ubah data
    def getKodeKosan(self):
        return self._kodeKosan
    def setKodeKosan(self, kodeKosan):
        self._kodeKosan = kodeKosan

    def getNamaKosan(self):
        return self._namaKosan
    def setNamaKosan(self, namaKosan):
        self._namaKosan = namaKosan

    def getAlamatKosan(self):
        return self._alamatKosan
    def setAlamatKosan(self, alamatKosan):
        self._alamatKosan = alamatKosan

    def getJumlahKamar(self):
        return self._jumlahKamar
    def setJumlahKamar(self, jumlahKamar):
        self._jumlahKamar = jumlahKamar

    def getListKamar(self):
        return self._listKamar
    def TambahKamar(self, kamar: Kamar):
        self._listKamar.append(kamar)

    def getListFasilitasUmum(self):
        return self._listFasilitasUmum
    def TambahFasilitasUmum(self, fasilitasUmum: FasilitasUmum):
        self._listFasilitasUmum.append(fasilitasUmum)