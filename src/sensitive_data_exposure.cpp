#include <iostream>
#include <string>
#include "sensitive_data_exposure.h"

void sensitiveDataExposureExample() {
    std::string password = "secret"; // Hardcoded sensitive data
    std::cout << "Password: " << password << std::endl; // Exposing sensitive data
    std::cout << "This should not be printed in production!" << std::endl;
}
