#include <iostream>
#include <cstring>
#include "buffer_overflow.h"

void bufferOverflowExample() {
    char buffer[10];
    std::cout << "Enter a string (max 10 characters): ";
    std::cin >> buffer; // Vulnerable to buffer overflow

    // Display the buffer content
    std::cout << "You entered: " << buffer << std::endl;

    // This will demonstrate the overflow
    char overflowInput[20] = "ThisInputIsTooLong";
    std::cout << "Attempting to overflow the buffer with: " << overflowInput << std::endl;
    strcpy(buffer, overflowInput); // This will cause a buffer overflow
    std::cout << "Buffer content after overflow: " << buffer << std::endl; // Undefined behavior
}
