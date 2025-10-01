#Class Kamar untuk simpan informasi kamar kos
class Kamar:
    def __init__(self, kodeKamar, tipeKamar, luasKamar, hargaKamar, statusKamar, deskripsiKamar, fasilitasKamar):
        self._kodeKamar = kodeKamar
        self._tipeKamar = tipeKamar
        self._luasKamar =luasKamar
        self._hargaKamar = hargaKamar
        self._statusKamar = statusKamar
        self._deskripsiKamar = deskripsiKamar
        self._fasilitasKamar = fasilitasKamar

    #Getter & Setter untuk akses dan ubah data
    def getKodeKamar(self):
        return self._kodeKamar
    def setKodeKamar(self, kodeKamar):
        self._kodeKamar = kodeKamar

    def getTipeKamar(self):
        return self._tipeKamar
    def setTipeKamar(self, tipeKamar):
        self._tipeKamar = tipeKamar

    def getLuasKamar(self):
        return self._luasKamar
    def setLuasKamar(self, luasKamar):
        self._luasKamar = luasKamar

    def getHargaKamar(self):
        return self._hargaKamar
    def setHargaKamar(self, hargaKamar):
        self._hargaKamar = hargaKamar

    def getStatusKamar(self):
        return self._statusKamar
    def setStatusKamar(self, statusKamar):
        self._statusKamar = statusKamar

    def getDeskripsiKamar(self):
        return self._deskripsiKamar
    def setDeskripsiKamar(self, deskripsiKamar):
        self._deskripsiKamar = deskripsiKamar

    def getFasilitasKamar(self):
        return self._fasilitasKamar
    def setFasilitasKamar(self, fasilitasKamar):
        self._fasilitasKamar = fasilitasKamar