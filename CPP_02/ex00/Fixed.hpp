#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int number;
    static const int constInt;

public:
    Fixed();
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed &operator=(const Fixed &src);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif 
