#include <iostream>

void fungsi(int &);
void kuadra(int &);

void fungsi(int &b)
{
    b = 10;
    std::cout << "adress b " << &b << std::endl;
    std::cout << "nilai b" << b << std::endl;
}

void kuadrat(int &nilaiRef)
{
    nilaiRef = nilaiRef * nilaiRef;
}

int main()
{
    std::cout << "Hello World" << std::endl;

    int a = 5;

    std::cout << "adress a " << &a << std::endl;
    std::cout << "nilai a " << a << std::endl;

    kuadrat(a);

    std::cout << "nilai a " << a << std::endl;
}