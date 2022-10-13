#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*funptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
    std::string tmp[] = {"debug", "info", "warning", "error"};
    size_t i;
    for (i = 0; i < 4; i++)
        if (tmp[i] == level)
            break;

    switch (i)
    {
    case (0):
        (this->*funptr[0])();
        break;
    case (1):
        (this->*funptr[1])();
        break;
    case (2):
        (this->*funptr[i])();
        break;
    case (3):
        (this->*funptr[i])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
}