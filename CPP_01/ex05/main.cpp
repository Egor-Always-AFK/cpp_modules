#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string input;

    std::cout << "Try talking to Harl(debug/info/warning/error or enter <exit> to exit):\n>> ";
    while (getline(std::cin, input))
    {
        if (input.compare("exit") == 0)
            return (0);
        harl.complain(input);
        std::cout << std::endl;
        std::cout << "\nTry talking to Harl(debug/info/warning/error or enter <exit> to exit):\n>> ";
    }
    return (0);
}