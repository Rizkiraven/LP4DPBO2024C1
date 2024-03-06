/*
Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// library yang digunakan
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

int main() {
    Car car1("D 1765 QN", "Toyota", 2015, "Putih", 7, 4);
    Car car2("D 1547 AN", "Wuling", 2021, "Biru", 5, 4);
    Car car3("D 4444 OK", "Suzuki", 2019, "Hitam", 5, 4);
    Car car4("D 1234 MTP", "Tesla", 2023, "Putih", 5, 4);
    
    Motorcycle motor1("D 4773 KO", "Honda", 2014, "Merah", "Matic", 10);
    Motorcycle motor2("D 5586 II", "Honda", 2012, "Putih", "Matic", 8);
    Motorcycle motor3("D 8753 LP", "Suzuki", 2020, "Hitam", "Manual", 8);
    Motorcycle motor4("D 7436 OK", "Kawasaki", 2014, "Merah", "Manual", 10);
    
    Garage garasi("Garasi Raven", 100);
    garasi.addDaftarKendaraan(&car1);
    garasi.addDaftarKendaraan(&car2);
    garasi.addDaftarKendaraan(&car3);
    garasi.addDaftarKendaraan(&car4);
    garasi.addDaftarKendaraan(&motor1);
    garasi.addDaftarKendaraan(&motor2);
    garasi.addDaftarKendaraan(&motor3);
    garasi.addDaftarKendaraan(&motor4);
    
    std::cout << "Nama Garasi : " << garasi.getNamaGarasi() << std::endl << std::endl;
    for (const auto& vehicle : garasi.getDaftarKendaraan()) {
        std::cout << "Plat nomor : " << vehicle->getPlatNomor() << "\nMerk : " << vehicle->getMerk()
                  << "\nTahun Produksi : " << vehicle->getTahunProduksi() << "\nWarna : " << vehicle->getWarna() << std::endl << std::endl;
    }
    
    ParkingLot parkiran(5);
    std::cout << "Parkiran slotnya ada 5 ges." << std::endl;
    parkiran.addKendaraan();
    parkiran.addKendaraan();
    parkiran.addKendaraan();
    parkiran.addKendaraan();
    parkiran.addKendaraan();
    parkiran.addKendaraan();
    
    return 0;
}