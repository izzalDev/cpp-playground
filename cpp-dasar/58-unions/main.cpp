#include <iostream>

union data
{
    int a;
    char b[4];
};

int main()
{
    data data_union;

    // satu block data memiliki beberapa tipe data
    // data_union.a = 1684234849;
    data_union.a = 12345642;
    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    std::cout << "Data a: " << data_union.a << std::endl;
    std::cout << "Data b: " << data_union.b << std::endl;

    return 0;
}