#include <iostream>

void insecureDeserializationExample() {
    std::string data;
    std::cout << "Enter serialized data: ";
    std::getline(std::cin, data);
    
    // Unsafe deserialization logic
    std::cout << "Deserialized data: " << data << std::endl;
}
