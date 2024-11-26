#include <iostream>
#include <string>

void sqlInjectionExample() {
    std::string userInput;
    std::cout << "Enter username: ";
    std::getline(std::cin, userInput);
    
    // Vulnerable to SQL Injection
    std::string query = "SELECT * FROM users WHERE username = '" + userInput + "'";
    std::cout << "Executing query: " << query << std::endl;
}
