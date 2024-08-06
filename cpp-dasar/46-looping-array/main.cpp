#include <iostream>
#include <array>

int main()
{
    // looping untuk array di c++11 keatas

    // for(deklarasi vaiabel : array){
    //     statement
    // }

    int arrayNilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : arrayNilai)
    {
        std::cout << "address :" << &nilai << " Nilainya : " << nilai << std::endl;
        nilai = 1; // tidak merubah array
    }

    std::cout << std::endl;

    // memanipulasi array menggunakan referensi
    for (int &nilaiRef : arrayNilai)
    {
        nilaiRef *= 2;
        std::cout << "address :" << &nilaiRef << " Nilainya : " << nilaiRef << std::endl;
    }

    std::cout << std::endl;

    for (int &nilaiRef : arrayNilai)
    {
        std::cout << "address :" << &nilaiRef << " Nilainya : " << nilaiRef << std::endl;
    }

    std::array<int, 10> arrayNilai2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int &nilaiRef : arrayNilai2)
    {
        std::cout << "address :" << &nilaiRef << " Nilainya : " << nilaiRef << std::endl;
    }

    return 0;
}