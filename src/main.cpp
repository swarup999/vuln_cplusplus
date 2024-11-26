#include <iostream>
#include "buffer_overflow.h"
#include "sql_injection.h"
#include "cross_site_scripting.h"
#include "vulnerable_lib.h" // Include the vulnerable library

int main() {
    std::cout << "Vulnerable C++ Project" << std::endl;

    // Call functions from each vulnerability example
    // Uncomment to test each vulnerability
    // sqlInjectionExample();
    // bufferOverflowExample();
    // crossSiteScriptingExample();
    
    // Test the vulnerable function
    char input[50];
    std::cout << "Enter a string to trigger the vulnerability: ";
    std::cin >> input;
    vulnerableFunction(input); // This will trigger the buffer overflow

    return 0;
}
