from Kamar import Kamar

#KamarPremium turunan dari Kamar dengan atribut tambahan untuk KamarPremium
class KamarPremium(Kamar):
    def __init__(self, kodeKamar, luasKamar, hargaKamar, statusKamar, deskripsiKamar, fasilitasKamar, tambahanHarga, fasilitasKamarPremium):
        #Memanggil constructor Kamar
        super().__init__(kodeKamar, "Premium", luasKamar, hargaKamar, statusKamar, deskripsiKamar, fasilitasKamar)
        self._tambahanHarga = tambahanHarga
        self._fasilitasKamarPremium = fasilitasKamarPremium

    #Getter & Setter untuk atribut khusus KamarPremium
    def getTambahanHarga(self):
        return self._tambahanHarga
    def setTambahanHarga(self, tambahanHarga):
        self._tambahanHarga = tambahanHarga

    def getFasilitasKamarPremium(self):
        return self._fasilitasKamarPremium
    def setFasilitasKamarPremium(self, fasilitasKamarPremium):
        self._fasilitasKamarPremium = fasilitasKamarPremium