#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream myFile;
    std::string output, buffer;
    int no;
    std::string nama;

    // ios::in,default
    // ios::ate = mulai dari akhir file
    // ios::binary

    myFile.open("data.txt", std::ios::in);

    while (true)
    {
        std::getline(myFile, buffer);
        output.append(buffer);
        if (buffer == "data")
        {
            break;
        }
    }

    std::cout << output << std::endl;

    std::getline(myFile, buffer);
    std::cout << buffer << std::endl;

    while (!myFile.eof())
    {
        myFile >> no;
        myFile >> nama;

        std::cout << no << "   " << nama << std::endl;
    }

    return 0;
}