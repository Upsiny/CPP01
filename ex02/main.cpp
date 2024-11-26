#include <string>
#include <iostream>

int main() {
    std::string     str = "HI THIS IS BRAIN";
    std::string     *stringPTR = &str;  //std::stringPTR
    std::string     &stringREF = str; //stringREF

    std::cout << &str << std::endl; //memory address of the string variable
    std::cout << stringPTR << std::endl; //memory address held by stringPTR
    std::cout << &stringREF << std::endl; //memory address held by stringREF

    std::cout << str << std::endl; //The value of the string variable.
    std::cout << *stringPTR << std::endl; //The value pointed to by stringPTR
    std::cout << stringREF << std::endl; //The value pointed to by stringREF
}
