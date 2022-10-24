#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Bob", 1);
        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat b2("Jim", 150);
        std::cout << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat b3("Bart", 0);
        std::cout << b3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b4("Ed", 151);
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}