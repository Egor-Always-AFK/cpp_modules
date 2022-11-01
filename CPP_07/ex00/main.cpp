#include "whatever.hpp"

int main()
{

    std::cout << "---------INT TEST---------" << std::endl;
    int a = 10;
    int b = 20;
    std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
    std::cout << "Max between a = " << a << " and b = " << b << " is " << ::max(a, b) << std::endl;
    std::cout << "Min between a = " << a << " and b = " << b << " is " << ::min(a, b) << std::endl;
    ::swap(a, b);
    std::cout << "After swap: a = " << a << " and b = " << b << std::endl;

    std::cout << "---------FLOAT TEST---------" << std::endl;
    float c = 21.21f;
    float d = 42.42f;
    std::cout << "c = " << c << std::endl << "d = " << d << std::endl;
    std::cout << "Max between c = " << c << " and b = " << d << " is " << ::max(c, d) << std::endl;
    std::cout << "Min between a = " << a << " and b = " << b << " is " << ::min(a, b) << std::endl;
    ::swap(c, d);
    std::cout << "After swap: c = " << c << " and d = " << d << std::endl;

    std::cout << "---------STRING TEST---------" << std::endl; 
    std::string s1 = "cat1";
    std::string s2 = "cat2";
    std::cout << "s1 = " << s1 << std::endl << "s2 = " << s2 << std::endl;
    std::cout << "Max between s1 = " << s1 << " and s2 = " << s2 << " is " << ::max(s1, s2) << std::endl;
    std::cout << "Min between s1 = " << s1 << " and s2 = " << s2 << " is " << ::min(s1, s2) << std::endl;
    ::swap(s1, s2);
    std::cout << "After swap: s1 = " << s1 << " and s2 = " << s2 << std::endl;
}