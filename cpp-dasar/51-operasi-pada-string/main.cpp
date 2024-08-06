#include <iostream>
#include <string>

int main()
{
    std::string kata("cat");

    // menampilkan data string
    std::cout << kata << std::endl;

    // mengambil karakter berdasarkan index
    std::cout << "index ke 0 : " << kata[0] << std::endl;
    std::cout << "index ke 1 : " << kata[1] << std::endl;
    std::cout << "index ke 2 : " << kata[2] << std::endl;

    // merubah karakter pada index
    kata[1] = 'e';
    std::cout << kata << std::endl;

    // menyambung, concatenation
    std::string kata2(kata + "ar");
    std::cout << kata2 << std::endl;

    std::string kata3(" membahana");
    kata2.append(kata3);
    std::cout << kata2 << std::endl;

    std::string kata4("ahay!!!!!!");
    kata2 += " " + kata4;
    std::cout << kata2 << std::endl;

    return 0;
}