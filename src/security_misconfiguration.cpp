#include <iostream>
#include "security_misconfiguration.h"

void securityMisconfigurationExample() {
    std::cout << "Warning: Default credentials are being used!" << std::endl;
    std::cout << "Username: admin" << std::endl;
    std::cout << "Password: admin123" << std::endl; // Exposing default credentials

    // Simulated access to a sensitive area
    std::cout << "Accessing sensitive data..." << std::endl;
    std::cout << "Sensitive data: [REDACTED]" << std::endl; // Placeholder for sensitive data
}
