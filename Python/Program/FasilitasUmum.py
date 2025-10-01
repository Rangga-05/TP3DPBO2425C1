#Class FasilitasUmum untuk simpan data fasilitas kosan
class FasilitasUmum:
    def __init__(self, kodeFasilitasUmum, namaFasilitasUmum):
        self._kodeFasilitasUmum = kodeFasilitasUmum
        self._namaFasilitasUmum = namaFasilitasUmum

    #Getter & Setter untuk akses dan ubah data
    def getKodeFasilitasUmum(self):
        return self._kodeFasilitasUmum
    def setKodeFasilitasUmum(self, kodeFasilitasUmum):
        self._kodeFasilitasUmum = kodeFasilitasUmum

    def getNamaFasilitasUmum(self):
        return self._namaFasilitasUmum
    def setNamaFasilitasUmum(self, namaFasilitasUmum):
        self._namaFasilitasUmum = namaFasilitasUmum