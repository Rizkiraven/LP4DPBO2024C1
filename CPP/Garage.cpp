#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Garage
{
private:
    string namaGarasi;
    int luasGarasi;
    vector<Vehicle*> daftarKendaraan;

public:
    Garage()
    {
    }

    Garage(string namaGarasi, int luasGarasi)
    {
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
    }

    string getNamaGarasi()
    {
        return this->namaGarasi;
    }

    void setNamaGarasi(string namaGarasi)
    {
        this->namaGarasi = namaGarasi;
    }

    int getLuasGarasi()
    {
        return this->luasGarasi;
    }

    void setLuasGarasi(int luasGarasi)
    {
        this->luasGarasi = luasGarasi;
    }

    vector<Vehicle*> getDaftarKendaraan()
    {
        return daftarKendaraan;
    }

    void addDaftarKendaraan(Vehicle* kendaraan)
    {
        daftarKendaraan.push_back(kendaraan);
    }

    ~Garage()
    {
    }
};
