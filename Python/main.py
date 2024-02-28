# Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

def main():
    car1 = Car("D 1765 QN", "Toyota", 2015, "Putih", 7, 4)
    car2 = Car("D 1547 AN", "Wuling", 2021, "Biru", 5, 4)
    car3 = Car("D 4444 OK", "Suzuki", 2019, "Hitam", 5, 4)
    car4 = Car("D 1234 MTP", "Tesla", 2023, "Putih", 5, 4)
    
    motor1 = Motorcycle("D 4773 KO", "Honda", 2014, "Merah", "Matic", 10)
    motor2 = Motorcycle("D 5586 II", "Honda", 2012, "Putih", "Matic", 8)
    motor3 = Motorcycle("D 8753 LP", "Suzuki", 2020, "Hitam", "Manual", 8)
    motor4 = Motorcycle("D 7436 OK", "Kawasaki", 2014, "Merah", "Manual", 10)
    
    garasi = Garage("Garasi Raven", 100)
    garasi.addDaftarKendaraan(car1)
    garasi.addDaftarKendaraan(car2)
    garasi.addDaftarKendaraan(car3)
    garasi.addDaftarKendaraan(car4)
    garasi.addDaftarKendaraan(motor1)
    garasi.addDaftarKendaraan(motor2)
    garasi.addDaftarKendaraan(motor3)
    garasi.addDaftarKendaraan(motor4)
    
    print("Nama Garasi : " + garasi.getNamaGarasi())
    print()
    for vehicle in garasi.getDaftarKendaraan():
        print(f"Plat nomor : {vehicle.getPlatNomor()}\nMerk : {vehicle.getMerk()}\n"
              f"Tahun Produksi : {vehicle.getTahunProduksi()}\nWarna : {vehicle.getWarna()}\n")
        
    parkiran = ParkingLot(5)
    print("Parkiran slotnya ada 5 ges.")
    parkiran.addKendaraan()
    parkiran.addKendaraan()
    parkiran.addKendaraan()
    parkiran.addKendaraan()
    parkiran.addKendaraan()
    parkiran.addKendaraan()
    
if __name__ == "__main__":
    main()