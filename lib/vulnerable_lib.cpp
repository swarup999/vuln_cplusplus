#include <iostream>
#include <cstring>
#include "vulnerable_lib.h"

void vulnerableFunction(char *input) {
    char buffer[10];
    // Vulnerable to buffer overflow
    strcpy(buffer, input);
    std::cout << "Buffer content: " << buffer << std::endl;
}
