#include <iostream>

void crossSiteScriptingExample() {
    std::string userInput;
    std::cout << "Enter your name: ";
    std::getline(std::cin, userInput);
    
    // Output without sanitization
    std::cout << "Hello, " << userInput << "!" << std::endl;
}
