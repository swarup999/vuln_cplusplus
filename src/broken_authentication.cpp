#include <iostream>

void brokenAuthenticationExample() {
    std::string username;
    std::cout << "Enter username: ";
    std::getline(std::cin, username);
    
    // Simulated authentication check (not secure)
    std::cout << "Authenticated user: " << username << std::endl;
}
