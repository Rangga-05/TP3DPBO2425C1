#Class Orang mempresentasikan entitas orang secara umum
class Orang:
    def __init__(self, noKtp, nama, alamat, noTelp):
        #Atribut dasar orang
        self._noKtp = noKtp
        self._nama = nama
        self._alamat = alamat
        self._noTelp = noTelp

    #Getter & Setter untuk akses dan ubah data
    def getNoKtp(self):
        return self._noKtp
    def setNoKtp(self, noKtp):
        self._noKtp = noKtp

    def getNama(self):
        return self._nama
    def setNama(self, nama):
        self._nama = nama

    def getAlamat(self):
        return self._alamat
    def setAlamat(self, alamat):
        self._alamat = alamat

    def getNoTelp(self):
        return self._noTelp
    def setNoTelp(self, noTelp):
        self._noTelp = noTelp