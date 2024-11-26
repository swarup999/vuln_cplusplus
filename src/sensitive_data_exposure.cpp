#include <iostream>

void sensitiveDataExposureExample() {
    std::string password = "secret"; // Hardcoded sensitive data
    std::cout << "Password: " << password << std::endl; // Exposing sensitive data
}
