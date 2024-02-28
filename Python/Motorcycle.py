# Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    __jenisMotor = ""
    __kapasitasTangki = 0
    
    def __init__(self, platNomor, merk, tahunProduksi, warna, jenisMotor, kapasitasTangki):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki
    
    def getJenisMotor(self):
        return self.__jenisMotor
    
    def setJenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor
    
    def getKapasitasTangki(self):
        return self.__kapasitasTangki
    
    def setKapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki