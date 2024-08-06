#include <iostream>

int main()
{
    int array[2][2] = {1, 2, 3, 4};

    std::cout << array[0][0] << " " << array[0][1] << std::endl;
    std::cout << array[1][0] << " " << array[1][1] << std::endl;
    return 0;
}