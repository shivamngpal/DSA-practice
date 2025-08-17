#include <iostream>
#include <climits> // Required for INT_MAX and LONG_MAX

int main() {
    // Print the size of each data type in bytes
    // 1 byte = 8 bits
    std::cout << "Size of int: " << sizeof(int) << " bytes (" << sizeof(int) * 8 << " bits)" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes (" << sizeof(long) * 8 << " bits)" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes (" << sizeof(long long) * 8 << " bits)" << std::endl;

    std::cout << "------------------------------------" << std::endl;

    // Print the maximum value for each type
    std::cout << "Max value of int (INT_MAX): " << INT_MAX << std::endl;
    std::cout << "Max value of long (LONG_MAX): " << LONG_MAX << std::endl;

    return 0;
}