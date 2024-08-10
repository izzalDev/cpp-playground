#include <iostream>
#include <fstream>
#include <string>

struct Mahasiswa
{
    int nim;
    std::string nama;
    std::string jurusan;

    Mahasiswa() {}

    Mahasiswa(int nim, std::string nama, std::string jurusan)
    {
        this->nim = nim;
        this->nama = nama;
        this->jurusan = jurusan;
    }

    void print()
    {
        std::cout << "NIM\t: " << this->nim << std::endl;
        std::cout << "Nama\t: " << this->nama << std::endl;
        std::cout << "Jurusan\t: " << this->jurusan << std::endl;
    }
};

Mahasiswa ambilData(int posisi, std::fstream &myFile)
{
    Mahasiswa buffer;
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char *>(&buffer), sizeof(Mahasiswa));
    return buffer;
}

void menulisData(Mahasiswa &mhs, std::fstream &myFile)
{
    myFile.write(reinterpret_cast<char *>(&mhs), sizeof(Mahasiswa));
}

void menulisDataByPos(int posisi, Mahasiswa &mhs, std::fstream &myFile)
{
    myFile.seekg((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char *>(&mhs), sizeof(Mahasiswa));
}

    int main()
{
    std::fstream myFile;

    myFile.open("build/data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

    Mahasiswa mhs1(123, "usup", "mesin");
    Mahasiswa mhs2, mhs3;

    menulisData(mhs1, myFile);
    mhs2 = ambilData(1, myFile);
    mhs2.print();

    menulisDataByPos(3, mhs1, myFile);
    mhs3 = ambilData(3, myFile);
    mhs3.print();

    myFile.close();
    return 0;
}