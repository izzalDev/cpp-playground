#include <iostream>
#include <array>
#include "menu.h"

// Function to perform Selection Sort
template <size_t N>
void selectionSort(std::array<int, N>& arr) {
    for (size_t i = 0; i < arr.size() - 1; i++) {
        size_t index = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[index]) { // Find the minimum element
                index = j;
            }
        }
        // Swap the elements
        std::swap(arr[i], arr[index]);
    }
}

// Function to print array
template <size_t N>
void printArray(const std::array<int, N> arr) {
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    int choice;
    std::array<int, 7> arr = {7, 2, 4, 1, 3, 5, 6};

    while (true) {
        choice = menu(); // Panggil fungsi menu
        
        if (choice == 1) {
            std::cout << "Error: Unimplemented\n";
        } else if (choice == 2) {
            selectionSort(arr);
            printArray(arr);
        } else if (choice == 3) {
            std::cout << "Error: Unimplemented\n";
        } else if (choice == 4) {
            std::cout << "Error: Unimplemented\n";
        } else if (choice == 5) {
            break; // Keluar dari loop
        } else {
            std::cout << "Error: Input is invalid\n";
        }
    }

    return 0;
}
