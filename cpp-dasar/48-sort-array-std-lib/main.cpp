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

void printArray(std::array<char, arraySize> &huruf)
{
    for (char &a : huruf)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, arraySize> angka = {9, 4, 7, 8, 1, 3, 2, 5, 0};
    std::array<char, arraySize> huruf = {'c',
                                         'h',
                                         'j',
                                         'e',
                                         'r',
                                         't',
                                         'y',
                                         'v',
                                         'b',
                                         'a'};

    std::sort(angka.begin(), angka.end());
    std::sort(huruf.begin(), huruf.end());

    printArray(angka);
    printArray(huruf);

    return 0;
}