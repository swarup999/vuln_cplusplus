#include <iostream>
#include <string>
#include "broken_authentication.h"

void brokenAuthenticationExample() {
    std::string username;
    std::string password;
    
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    // Simulated authentication logic (vulnerable)
    if (username == "admin" && password == "password") {
        std::cout << "Authenticated as admin!" << std::endl;
    } else {
        std::cout << "Authentication failed!" << std::endl;
    }
}
