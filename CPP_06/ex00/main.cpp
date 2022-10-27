#include "Converter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return (1);
    }
    else
        std::cout << Converter(argv[1]);
}