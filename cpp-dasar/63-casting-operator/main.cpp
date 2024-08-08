#include <iostream>

int main()
{
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    std::cout << a + (int)b << std::endl;

    std::cout << (int)c << std::endl;
    std::cout << c + a << std::endl;

    std::cout << (char)(c + a) << std::endl;

    return 0;
}