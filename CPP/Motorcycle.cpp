/*
Saya Muhammad Rizki Revandi dengan NIM 2205027 mengerjakan Latihan Praktikum 3
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class Motorcycle : public Vehicle
{
    private:
    string jenisMotor;
    int kapasitasTangki;

    public:
    Motorcycle()
    {

    }

    Motorcycle(string platNomor, string merk, int tahunProduksi, string warna, string jenisMotor, int kapasitasTangki) : Vehicle(platNomor, merk, tahunProduksi, warna)
    {
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = kapasitasTangki;
    }

    string getJenisMotor()
    {
        return this->jenisMotor;
    }

    void setJenisMotor(int jenisMotor)
    {
        this->jenisMotor = jenisMotor;
    }

    int getKapasitasTangki()
    {
        return this->kapasitasTangki;
    }

    void setKapasitasTangki(int kapasitasTangki)
    {
        this->kapasitasTangki = kapasitasTangki;
    }

    ~Motorcycle()
    {

    }
};