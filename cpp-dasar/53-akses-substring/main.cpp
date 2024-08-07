#include <iostream>
#include <string>

int main()
{
    std::string kalimat_1("Dayat suka olahraga supaya sehat");
    std::string kalimat_2("Ucup suka makan pisang di pagi hari");

    std::cout << "1: " << kalimat_1 << std::endl;
    std::cout << "2: " << kalimat_2 << std::endl;

    // substrin, mengambil string di tengah-tengah
    // substr(index, panjang)
    std::cout << kalimat_1.substr(11, 8) << std::endl;
    std::cout << kalimat_2.substr(16, 6) << std::endl;

    // mencari posisi dari substring
    std::cout << "posisi olahraga : " << kalimat_1.find("olahraga") << std::endl;
    std::cout << "posisi pisang : " << kalimat_2.find("pisang") << std::endl;

    int a = kalimat_1.find("a");
    std::cout << a << std::endl;
    std::cout << kalimat_1.find("a", a + 1) << std::endl;

    // mencari posisinya dari belakang
    std::cout << kalimat_2.rfind("an") << std::endl;
    
    return 0;
}