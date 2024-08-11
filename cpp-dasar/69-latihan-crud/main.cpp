#if defined(_WIN32) || defined(WIN32)
#define IS_WINDOWS 1
#else
#define IS_WINDOWS 0
#endif

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> // Untuk std::setw

struct Mahasiswa
{
    int id;
    std::string nim, nama, jurusan;
};

int getOptions();
void checkDatabase(std::fstream &data);
void addDataMahasiswa(std::fstream &data);
void writeData(std::fstream &data, int posisi, Mahasiswa &inputMahasiswa);
int getDataSize(std::fstream &data);
Mahasiswa readData(std::fstream &data, int posisi);
void displayDataMahasiswa(std::fstream &data);

int main()
{
    std::fstream data;
    checkDatabase(data);

    int option = getOptions();
    char is_continue;

    enum Option
    {
        CREATE = 1,
        READ = 2,
        UPDATE = 3,
        DELETE = 4,
        FINISH = 5
    };

    while (option != FINISH)
    {
        switch (option)
        {
        case CREATE:
            std::cout << "Menambah data mahasiswa...\n";
            addDataMahasiswa(data);
            break;
        case READ:
            std::cout << "Menampilkan data mahasiswa...\n";
            displayDataMahasiswa(data);
            break;
        case UPDATE:
            std::cout << "Mengubah data mahasiswa...\n";
            // Implementasi fungsi updateDataMahasiswa() belum ada
            break;
        case DELETE:
            std::cout << "Menghapus data mahasiswa...\n";
            // Implementasi fungsi deleteDataMahasiswa() belum ada
            break;
        case FINISH:
            std::cout << "Program selesai.\n";
            break;
        default:
            std::cout << "Pilihan tidak valid.\n";
            break;
        }

        std::cout << "Lanjutkan? (y/n) : ";
        std::cin >> is_continue;

        if ((is_continue == 'y') || (is_continue == 'Y'))
        {
            option = getOptions();
        }
        else
        {
            option = FINISH;
        }
    }

    return 0;
}

int getOptions()
{
    int input;
    std::cout << "\nProgram CRUD data mahasiswa" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "1. Tambah data mahasiswa" << std::endl;
    std::cout << "2. Tampilkan data mahasiswa" << std::endl;
    std::cout << "3. Ubah data mahasiswa" << std::endl;
    std::cout << "4. Hapus data mahasiswa" << std::endl;
    std::cout << "5. Selesai" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "Pilih [1-5]? : ";
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return input;
}

void checkDatabase(std::fstream &data)
{
    data.open("build/data.bin", std::ios::out | std::ios::in | std::ios::binary);
    if (data.is_open())
    {
        std::cout << "Database ditemukan.\n";
    }
    else
    {
        std::cout << "Database tidak ditemukan, buat database baru.\n";
        data.close();
        data.open("build/data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}

void addDataMahasiswa(std::fstream &data)
{
    Mahasiswa inputMahasiswa, lastMahasiswa;
    int size = getDataSize(data);
    inputMahasiswa.id = (size == 0) ? 1 : readData(data, size).id + 1;

    std::cout << "NIM\t: ";
    std::getline(std::cin, inputMahasiswa.nim);
    std::cout << "Nama\t: ";
    std::getline(std::cin, inputMahasiswa.nama);
    std::cout << "Jurusan\t: ";
    std::getline(std::cin, inputMahasiswa.jurusan);

    writeData(data, size + 1, inputMahasiswa);
}

void writeData(std::fstream &data, int posisi, Mahasiswa &inputMahasiswa)
{
    data.seekp((posisi - 1) * sizeof(Mahasiswa), std::ios::beg);
    data.write(reinterpret_cast<char *>(&inputMahasiswa), sizeof(Mahasiswa));
}

int getDataSize(std::fstream &data)
{
    data.seekg(0, std::ios::beg);
    int start = data.tellg();
    data.seekg(0, std::ios::end);
    int end = data.tellg();
    return (end - start) / sizeof(Mahasiswa);
}

Mahasiswa readData(std::fstream &data, int posisi)
{
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1) * sizeof(Mahasiswa), std::ios::beg);
    data.read(reinterpret_cast<char *>(&readMahasiswa), sizeof(Mahasiswa));
    return readMahasiswa;
}

void displayDataMahasiswa(std::fstream &data)
{
    int size = getDataSize(data);
    Mahasiswa currentMahasiswa;

    // Print header
    std::cout << "=================================================\n";
    std::cout << "|No\t|NIM\t|Nama\t\t|Jurusan\t|\n";
    std::cout << "=================================================\n";

    // Print data
    for (int i = 1; i <= size; i++)
    {
        currentMahasiswa = readData(data, i);
        std::cout << "|"<< i << "\t|"
                  << currentMahasiswa.nim << "\t| "
                  << currentMahasiswa.nama << "\t\t| "
                  << currentMahasiswa.jurusan << "\t|\n";
    }

    // Print footer
    std::cout << "=================================================\n";
}