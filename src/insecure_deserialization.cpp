#include <iostream>
#include <string>
#include "insecure_deserialization.h"

void insecureDeserializationExample() {
    std::string data;
    std::cout << "Enter serialized data (e.g., '1; DROP TABLE users;'): ";
    std::getline(std::cin, data);
    
    // Unsafe deserialization logic
    std::cout << "Deserialized data: " << data << std::endl;
    
    // Simulating execution of deserialized data (vulnerable)
    if (data == "1; DROP TABLE users;") {
        std::cout << "Executing dangerous command: " << data << std::endl; // Simulated execution
    }
}
