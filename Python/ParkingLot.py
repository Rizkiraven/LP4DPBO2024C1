# Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class ParkingLot:
    __kapasitas = ""
    __jumlahKendaraan = 0
    
    def __init__(self, kapasitas):
        self.__kapasitas = kapasitas
        self.__jumlahKendaraan = 0
    
    def getKapasitas(self):
        return self.__kapasitas
    
    def getJumlahKendaraan(self):
        return self.__jumlahKendaraan
    
    def addKendaraan(self):
        if self.__jumlahKendaraan < self.__kapasitas:
            self.__jumlahKendaraan += 1
            print("Parkir kendaraannya udah aman cuy.")
        else:
            print("Woilah penuh parkirannya.")