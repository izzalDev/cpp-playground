#include <iostream>

enum warna
{
    merah,
    putih,
    hitam,
    coklat = 5,
    kuning,
    biru
};

int main()
{
    warna kain;

    kain = hitam;

    if (kain == hitam)
    {
        std::cout << "warna kain hitam" << std::endl;
    }

    std::cout << kain << std::endl;

    return 0;
}