from Orang import Orang
from Kamar import Kamar

#Class Penyewa turunan dari Orang untuk simpan data orang yang sewa
class Penyewa(Orang):
    def __init__(self, noKtp, nama, alamat, noTelp, kodeSewa, kosan, kamar: Kamar, tanggalMasuk, jatuhTempo, statusPembayaran):
        #Memanggil constructor Orang
        super().__init__(noKtp, nama, alamat, noTelp)
        self._kodeSewa = kodeSewa
        self._kosan = kosan
        self._kamar = kamar
        self._tanggalMasuk = tanggalMasuk
        self._jatuhTempo = jatuhTempo
        self._statusPembayaran = statusPembayaran

    #Getter & Setter untuk atribut khusus Penyewa
    def getKodeSewa(self):
        return self._kodeSewa
    def setKodeSewa(self, kodeSewa):
        self._kodeSewa = kodeSewa

    def getKosan(self):
        return self._kosan
    def setKosan(self, kosan):
        self._kosan = kosan

    def getKamar(self):
        return self._kamar
    def setKamar(self, kamar):
        self._kamar = kamar

    def getTanggalMasuk(self):
        return self._tanggalMasuk
    def setTanggalMasuk(self, tanggalMasuk):
        self._tanggalMasuk = tanggalMasuk

    def getJatuhTempo(self):
        return self._jatuhTempo
    def setJatuhTempo(self, jatuhTempo):
        self._jatuhTempo = jatuhTempo

    def getStatusPembayaran(self):
        return self._statusPembayaran
    def setStatusPembayaran(self, statusPembayaran):
        self._statusPembayaran = statusPembayaran