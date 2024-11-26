#include <iostream>
#include <string>
#include "cross_site_scripting.h"

void crossSiteScriptingExample() {
    std::string userInput;
    std::cout << "Enter your name: ";
    std::getline(std::cin, userInput);
    
    // Output without sanitization (vulnerable to XSS)
    std::cout << "<h1>Hello, " << userInput << "!</h1>" << std::endl; // Potential XSS
    std::cout << "You can execute scripts like this: <script>alert('XSS');</script>" << std::endl;
}
