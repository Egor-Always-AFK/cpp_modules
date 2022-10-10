#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Address of string: " << &string << "\nAddress of stringPTR: " << stringPTR << "\nAddress if stringREF: " << &stringREF << "\n";
    std::cout << "\nValue of string: " << string << "\nValue pointed to by stringPTR: " << *stringPTR << "\nValue pointed to by stringREF: " << stringREF << "\n";
    return (0);
}