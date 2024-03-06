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

// Deklarasi namespace
using namespace std;

class Vehicle
{
private:
    string platNomor;
    string merk;
    int tahunProduksi;
    string warna;

public:
    // Constructor
    Vehicle()
    {
    }

    Vehicle(string platNomor, string merk, int tahunProduksi, string warna)
    {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
    }

    string getPlatNomor()
    {
        return this->platNomor;
    }

    void setPlatNomor(string platNomor)
    {
        this->platNomor = platNomor;
    }

    string getMerk()
    {
        return this->merk;
    }

    void setMerk(string merk)
    {
        this->merk = merk;
    }

    int getTahunProduksi()
    {
        return this->tahunProduksi;
    }

    void setTahunProduksi(int tahunProduksi)
    {
        this->tahunProduksi = tahunProduksi;
    }

    string getWarna()
    {
        return this->warna;
    }

    void setWarna(string warna)
    {
        this->warna = warna;
    }

    // Destructor
    ~Vehicle()
    {
    }
};