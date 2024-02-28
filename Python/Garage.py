# Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Garage:
    __namaGarasi = ""
    __luasGarasi = 0
    __daftarKendaraan = []
    
    def __init__(self, namaGarasi, luasGarasi):
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasGarasi
        self.__daftarKendaraan = []
    
    def getNamaGarasi(self):
        return self.__namaGarasi
    
    def setNamaGarasi(self, namaGarasi):
        self.__namaGarasi = namaGarasi
        
    def getLuasGarasi(self):
        return self.__luasGarasi
    
    def setLuasGarasi(self, luasGarasi):
        self.__luasGarasi = luasGarasi
        
    def getDaftarKendaraan(self):
        return self.__daftarKendaraan
        
    def addDaftarKendaraan(self, daftarKendaraan):
        self.__daftarKendaraan.append(daftarKendaraan)