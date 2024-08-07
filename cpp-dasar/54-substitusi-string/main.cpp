#include <iostream>
#include <string>

int main()
{
    std::string kalimat_1("aku suka kamu suka, siapa? dia!");
    std::string kalimat_2("wakanda forevah!!!");

    std::cout << "1: " << kalimat_1 << std::endl;
    std::cout << "2: " << kalimat_2 << std::endl;

    // swap string
    std::cout << "swap string" << std::endl;
    kalimat_1.swap(kalimat_2);
    std::cout << "1: " << kalimat_1 << std::endl;
    std::cout << "2: " << kalimat_2 << std::endl;

    // replace, mengganti string
    std::cout << "replace string" << std::endl;
    kalimat_2.replace(27, 3, "otong");
    kalimat_1.replace(kalimat_1.find("ah"), 2, "er");
    std::cout << "1: " << kalimat_1 << std::endl;
    std::cout << "2: " << kalimat_2 << std::endl;

    // insert string
    std::cout << "replace string" << std::endl;
    kalimat_1.insert(8, "dan hatiku ");
    std::cout << "1: " << kalimat_1 << std::endl;
    std::cout << "2: " << kalimat_2 << std::endl;

    return 0;
}