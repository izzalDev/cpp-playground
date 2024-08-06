#include <iostream>
#include <array>

int main()
{
    // membuat array dengan menggunakan standard library
    // array<int, jumlah array> nama array

    std::array<int, 5> nilai;
    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        std::cout << "nilai [" << i << "] address :" << &nilai[i] << std::endl;
    }

    // ukuran array
    std::cout << std::endl;
    std::cout << nilai.size() << std::endl;

    // address awal dari array
    std::cout << "address awal : " << nilai.begin() << std::endl;
    // address akhir dari array
    std::cout << "address akhir : " << nilai.end() << std::endl;
    // nilai dengan index
    std::cout << "nilai ke 2 : " << nilai.at(2) << std::endl;

    return 0;
}
