#include <iostream>
#include <fstream>

int main()
{
    std::ofstream myFile;

    // ios::out = operasi output, default
    // ios::app = menuliskan pada akhir baris
    // ios::trunc = membuat file jika tidak ada, dan kalau ada akan dihapus, default

    myFile.open("build/data3.txt", std::ios::app); // append
    myFile << "penulisan pada data3 \n";
    myFile.close();

    int a = 12345678;
    myFile.open("build/data1.txt", std::ios::out);
    myFile << "penulisan pada data 1";
    myFile << a;
    std::cout << "apa console";
    myFile.close();

    myFile.open("build/data2.txt", std::ios::out);
    myFile << "penulisan pada data 2";
    std::cout << "apa console";
    myFile.close();

    return 0;
}