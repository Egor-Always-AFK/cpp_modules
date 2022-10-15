#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed()
{
	number = 0;
}

Fixed::Fixed(const int intNumber)
{
	number = intNumber << bits;
}

Fixed::Fixed(const float floatNumber)
{
	number = roundf(floatNumber * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::~Fixed(){ }

Fixed &Fixed::operator=(const Fixed &src)
{
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

bool Fixed::operator>(const Fixed &obj) const
{
	return (number > obj.number);
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (number >= obj.number);
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (number < obj.number);
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (number <= obj.number);
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (number == obj.number);
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (number != obj.number);
}

Fixed Fixed::operator+(const Fixed &add) const
{
	Fixed ret(add);
	ret.setRawBits(add.getRawBits() + this->getRawBits());
	return (ret);
}

Fixed Fixed::operator-(const Fixed &sub) const
{
	Fixed ret(sub);
	ret.setRawBits(sub.getRawBits() - this->getRawBits());
	return (ret);
}

Fixed Fixed::operator*(const Fixed &mul) const
{
	Fixed ret(mul);
	ret.setRawBits(this->getRawBits() * mul.getRawBits() / (1 << this->bits));
	return (ret);
}

Fixed Fixed::operator/(const Fixed &div) const
{
	Fixed ret(div);
	ret.setRawBits((float)this->getRawBits() * (1 << this->bits) / div.getRawBits());
	return (ret);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);

	++this->number;

	return (ret);
}

Fixed &Fixed::operator++(void)
{
	number++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);
	--this->number;

	return(ret);
}

Fixed &Fixed::operator--(void)
{
	number--;
	return (*this);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	else
		return (num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	else
		return (num2);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	else
		return (num1);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{ 
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	else
		return (num1);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}