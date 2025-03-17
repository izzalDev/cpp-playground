#include <iostream>
#include "menu.h"

int menu(){
  int input;
  std::cout << "Menu Utama" << std::endl;
  std::cout << "1. Bubble Sort" << std::endl;
  std::cout << "2. Selection Sort" << std::endl;
  std::cout << "3. Insertion Sort" << std::endl;
  std::cout << "4. Searching/Cari" << std::endl;
  std::cout << "5. Keluar" << std::endl;
  std::cout << "Pilih [1..5]";
  std::cin >> input;
  return input;
}
