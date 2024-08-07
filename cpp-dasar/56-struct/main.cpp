#include <iostream>
#include <string>

// Struct: data yang dibentuk oleh beberapa data
struct buah
{
    std::string warna;
    float berat;
    int harga;
    std::string rasa;
};

int main()
{
    buah apel;

    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 50000;
    apel.rasa = "manis kesat";

    std::cout << apel.warna << std::endl;
    std::cout << apel.berat << std::endl;
    std::cout << apel.harga << std::endl;
    std::cout << apel.rasa << std::endl;

    buah jeruk;

    jeruk.warna = "orange";
    jeruk.berat = 150.50f;
    jeruk.harga = 20000;
    jeruk.rasa = "asam";

    std::cout << jeruk.warna << std::endl;
    std::cout << jeruk.berat << std::endl;
    std::cout << jeruk.harga << std::endl;
    std::cout << jeruk.rasa << std::endl;

    return 0;
}