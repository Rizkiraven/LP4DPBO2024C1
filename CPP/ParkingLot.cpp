#include <iostream>

class ParkingLot
{
private:
    int kapasitas;
    int jumlahKendaraan;

public:
    ParkingLot()
    {

    }

    ParkingLot(int kapasitas)
    {
        this->kapasitas = kapasitas;
        this->jumlahKendaraan = 0;
    }

    int getKapasitas()
    {
        return kapasitas;
    }

    int getJumlahKendaraan()
    {
        return jumlahKendaraan;
    }

    void addKendaraan()
    {
        if (jumlahKendaraan < kapasitas)
        {
            jumlahKendaraan++;
            std::cout << "Parkir kendaraannya udah aman cuy." << std::endl;
        }
        else
        {
            std::cout << "Woilah penuh parkirannya." << std::endl;
        }
    }

    ~ParkingLot()
    {

    }
};
