#include <iostream>
#include <bitset>
#include <string>

void printBinary(unsigned short val, std::string nama)
{
    std::cout << nama << " = " << std::bitset<8>(val) << std::endl;
}

int main()
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    std::cout << "& = Bitwise AND" << std::endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    std::cout << "\n| = Bitwise OR" << std::endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    std::cout << "\n^ = Bitwise XOR" << std::endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    std::cout << "\n~ = Bitwise NOT" << std::endl;
    printBinary(a, "a");
    printBinary(~a, "~a");

    std::cout << "\n<< = Bitwise SHL" << std::endl;
    printBinary(a, "a");
    printBinary(a << 1, "a << 1");

    std::cout << "\n>> = Bitwise SHR" << std::endl;
    printBinary(a, "a");
    printBinary(a >> 1, "a >> 1");

    return 0;
}

// bitwise operator
// &    AND Bitwise AND
// |    OR  Bitwise inclusive OR
// ^    XOR Bitwise exclusive  OR
// ~    NOT
// <<   SHL Shift bits left
// >>   SHR Shift bits right