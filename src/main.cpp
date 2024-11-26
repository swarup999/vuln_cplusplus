#include <iostream>
#include "buffer_overflow.h"
#include "sql_injection.h"
#include "cross_site_scripting.h"
#include "insecure_deserialization.h"
#include "sensitive_data_exposure.h"
#include "broken_authentication.h"
#include "security_misconfiguration.h"

int main() {
    std::cout << "Vulnerable C++ Project" << std::endl;

    // Call functions from each vulnerability example
    std::cout << "\n=== Buffer Overflow Example ===\n";
    bufferOverflowExample();
    
    std::cout << "\n=== SQL Injection Example ===\n";
    sqlInjectionExample();
    
    std::cout << "\n=== Cross-Site Scripting Example ===\n";
    crossSiteScriptingExample();
    
    std::cout << "\n=== Insecure Deserialization Example ===\n";
    insecureDeserializationExample();
    
    std::cout << "\n=== Sensitive Data Exposure Example ===\n";
    sensitiveDataExposureExample();
    
    std::cout << "\n=== Broken Authentication Example ===\n";
    brokenAuthenticationExample();
    
    std::cout << "\n=== Security Misconfiguration Example ===\n";
    securityMisconfigurationExample();

    return 0;
}
