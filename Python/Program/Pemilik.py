from Orang import Orang

#Class Pemilik turunan dari Orang yang mempresentasikan pemilik kosan dengan atribut tambahan
class Pemilik(Orang):
    def __init__(self, noKtp, nama, alamat, noTelp, kodeKosan, kodePemilik, noRekening):
        #Memanggil constructor Orang
        super().__init__(noKtp, nama, alamat, noTelp)
        self._kodePemilik = kodePemilik
        self._kodeKosan = kodeKosan
        self._noRekening = noRekening

    #Getter & Setter untuk atribut khusus Pemilik
    def getKodePemilik(self):
        return self._kodePemilik
    def setKodePemilik(self, kodePemilik):
        self._kodePemilik = kodePemilik

    def getKodeKosan(self):
        return self._kodeKosan
    def setKodeKosan(self, kodeKosan):
        self._kodeKosan = kodeKosan

    def getNoRekening(self):
        return self._noRekening
    def setNoRekening(self, noRekening):
        self._noRekening = noRekening