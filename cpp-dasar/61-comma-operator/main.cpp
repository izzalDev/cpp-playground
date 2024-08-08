#include <iostream>
#include <string>

void printData(int val)
{
    std::cout << val << std::endl;
}

int main()
{
    int a;
    int b;
    int c;

    a = (b = 4, printData(b), c = 6, printData(c), (b + c));
    std::cout << a << std::endl;

    return 0;
}