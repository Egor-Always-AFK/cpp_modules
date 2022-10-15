#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::Fixed(const int intNumber)
{
	std::cout << "Int constructor called" << std::endl;
	number = intNumber << bits;
}

Fixed::Fixed(const float floatNumber)
{
	std::cout << "Float constructor called" << std::endl;
	number = roundf(floatNumber * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		number = src.getRawBits();
	
	return(*this);
}

float Fixed::toFloat(void) const
{
	return (number / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return (number >> bits);
}

int Fixed::getRawBits(void) const
{
	return (number);
}

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}