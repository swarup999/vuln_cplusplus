#include <iostream>
#include "buffer_overflow.h"

void bufferOverflowExample() {
    char buffer[10];
    std::cout << "Enter a string (max 10 characters): ";
    std::cin >> buffer; // Vulnerable to buffer overflow
    std::cout << "You entered: " << buffer << std::endl;
}
