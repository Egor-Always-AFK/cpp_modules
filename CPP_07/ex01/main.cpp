#include "iter.hpp"

int main()
{
    
    std::cout << "---------INT TEST---------" << std::endl;
    int arrI[10] = {100, 42, 21, 1000, 7, 10, 320, 23421, 23, 0};
    iter<int>(arrI, 10, &print);

    std::cout << std::endl << "---------FLOAT TEST---------" << std::endl;
    float arrF[10] = {100.2f, 42.42f, 21.21f, 123.321f, 1000.7f, 12345.54321f, 0.0f, 100.3f, 678.987f, 10.01f};
    iter<float>(arrF, 10, &print);
    std::cout << std::endl << "---------STRING TEST---------" << std::endl; 
    std::string arrS[10] = {"cat1", "cat2", "cat3", "cat4", "cat5", "cat6", "cat7", "cat8", "cat9", "cat10"};
    iter<std::string>(arrS, 10, &print);
    std::cout << std::endl;
    return 0;
}