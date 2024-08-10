#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream myFile;
    int hasil;

    // int number = 1234;
    // myFile.open("data.bin", std::ios::out | std::ios::binary);
    // myFile.write(reinterpret_cast<char *>(&number), sizeof(number));
    // myFile.close();

    myFile.open("data.bin", std::ios::in | std::ios::binary);
    myFile.read(reinterpret_cast<char *>(&hasil), sizeof(hasil));
    myFile.close();

    std::cout << "besar integer = " << sizeof(hasil) << std::endl;
    std::cout << hasil << std::endl;

    return 0;
}