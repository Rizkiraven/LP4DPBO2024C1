# Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Vehicle:
    __platNomor = ""
    __merk = ""
    __tahunProduksi = 0
    __warna = ""
    
    def __init__(self, platNomor, merk, tahunProduksi, warna):
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna
        
    def getPlatNomor(self):
        return self.__platNomor
    
    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor
        
    def getMerk(self):
        return self.__merk
    
    def setMerk(self, merk):
        self.__merk = merk
        
    def getTahunProduksi(self):
        return self.__tahunProduksi
    
    def setTahunProduksi(self, tahun__tahunProduksi):
        self.__tahunProduksi = tahun__tahunProduksi
        
    def getWarna(self):
        return self.__warna
    
    def setWarna(self, warna):
        self.__warna = warna