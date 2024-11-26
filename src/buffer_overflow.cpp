#include <iostream>
#include <cstring>

void bufferOverflowExample() {
    char buffer[10];
    std::cout << "Enter a string (max 10 characters): ";
    std::cin >> buffer; // Vulnerable to buffer overflow
    std::cout << "You entered: " << buffer << std::endl;
}
