#include <iostream>
#include <string>
#include "sql_injection.h"

void sqlInjectionExample() {
    std::string userInput;
    std::cout << "Enter username: ";
    std::getline(std::cin, userInput);
    
    // Vulnerable to SQL Injection
    std::string query = "SELECT * FROM users WHERE username = '" + userInput + "'";
    std::cout << "Executing query: " << query << std::endl;

    // Simulating database response
    if (userInput == "admin' --") {
        std::cout << "Welcome, admin! You have full access." << std::endl; // Simulated admin access
    } else {
        std::cout << "User  not found." << std::endl;
    }
}
