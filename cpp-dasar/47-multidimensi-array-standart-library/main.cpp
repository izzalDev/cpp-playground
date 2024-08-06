#include <iostream>
#include <array>

const int kolom = 3;
const int baris = 2;

void printArray(std::array<std::array<int, kolom>, baris> nilaiArray)
{
    for (std::array<int, kolom> vectorBaris : nilaiArray)
    {
        for (int nilaiKolom: vectorBaris)
        {
            std::cout << nilaiKolom << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    const int kolom = 3;
    const int baris = 2;

    std::array<std::array<int, kolom>, baris> nilaiMD = {0, 1, 2, 3, 4, 5};

    printArray(nilaiMD);

    return 0;
}