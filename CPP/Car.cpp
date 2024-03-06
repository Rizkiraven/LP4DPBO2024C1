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

class Car : public Vehicle
{
    private:
    int jumlahKursi;
    int jumlahPintu;

    public:
    Car()
    {

    }

    Car(string platNomor, string merk, int tahunProduksi, string warna, int jumlahKursi, int jumlahPintu) : Vehicle(platNomor, merk, tahunProduksi, warna)
    {
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;
    }

    int getJumlahKursi()
    {
        return this->jumlahKursi;
    }

    void setJumlahKursi(int jumlahKursi)
    {
        this->jumlahKursi = jumlahKursi;
    }

    int getJumlahPintu()
    {
        return this->jumlahPintu;
    }

    void setJumlahPintu(int jumlahPintu)
    {
        this->jumlahPintu = jumlahPintu;
    }

    ~Car()
    {

    }
};