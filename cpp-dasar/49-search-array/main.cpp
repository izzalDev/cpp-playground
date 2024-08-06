#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> &angka)
{
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, arraySize> angka = {9, 4, 7, 8, 1, 3, 2, 5, 0};

    int angkaCari = 10;
    bool ketemu;

    // sort dulu
    // search -> binary_search
    std::sort(angka.begin(), angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

    printArray(angka);

    if (ketemu)
    {
        std::cout << "ketemu" << std::endl;
    }
    else
    {
        std::cout << "tidak ketemu" << std::endl;
    }

    return 0;
}