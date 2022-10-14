#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int number;
		static const int bits;
	public:
		Fixed();
		Fixed(const int intNumber);
		Fixed(const float floatNumber);
		Fixed(const Fixed &fixed);
		~Fixed();

		Fixed &operator=(const Fixed &src);

		int toInt(void) const;
		float toFloat(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);