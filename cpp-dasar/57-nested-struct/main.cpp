#include <iostream>
#include <string>

struct aktor
{
    std::string name;
    int tahun_lahir;
};

struct film
{
    std::string judul;
    std::string genre;
    int tahun;
    aktor pemeran_1;
    aktor pemeran_2;

    void cetak()
    {
        std::cout << this->judul << std::endl;
        std::cout << this->genre << std::endl;
        std::cout << this->tahun << std::endl;
        std::cout << this->pemeran_1.name << std::endl;
        std::cout << this->pemeran_2.name << std::endl;
    }
};

int main()
{
    aktor aktor1, aktor2;
    film film1, film2;

    aktor1.name = "Michele Otong";
    aktor1.tahun_lahir = 1992;

    aktor2.name = "Sandra Bulog";
    aktor2.tahun_lahir = 1995;

    film1.judul = "Pengabdi Wakanda";
    film1.genre = "Documenter";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;
    film1.cetak();

    film2.judul = "Dilan 2000";
    film2.genre = "action";
    film2.tahun = 2040;
    film2.pemeran_1 = aktor1;
    film2.cetak();

    return 0;
}