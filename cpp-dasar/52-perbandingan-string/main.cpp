#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::string kata_rahasia("ucup");

    while (true)
    {
        std::cout << "tebak nama : ";
        std::cin >> input;
        
        if (input == kata_rahasia)
        {
            std::cout << "tebakan anda benar!!!" << std::endl;
            break;
        }
        else
        {
            std::cout << "tebakan anda salah!!!" << std::endl;
        }
    }

    std::cout << "program selesai" << std::endl;

    return 0;
}