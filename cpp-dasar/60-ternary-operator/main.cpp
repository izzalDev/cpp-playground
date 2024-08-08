#include <iostream>
#include <string>

// ternary operator = ?
// kondisi ? hasil1 : hasil2

int main()
{
    int a, b;
    std::string hasil1, hasil2, hasil3, output;

    hasil1 = "otop";
    hasil2 = "ucup";

    a = 5;

    std::cout << "masukan angka? ";
    std::cin >> b;

    output = (a < b) ? hasil1 : hasil2;
    std::cout << output << std::endl;

    if (a < b)
    {
        output = hasil1;
    }
    else
    {
        output = hasil2;
    }

    std::cout << output << std::endl;

    return 0;
}