#ifndef FIXED_HPP
#define FIXED_HPP

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

		bool operator>(const Fixed &obj) const;
		bool operator<(const Fixed &obj) const;
		bool operator>=(const Fixed &obj) const;
		bool operator<=(const Fixed &obj) const;
		bool operator==(const Fixed &obj) const;
		bool operator!=(const Fixed &obj) const;

		Fixed operator+(const Fixed &add) const;
		Fixed operator-(const Fixed &sub) const;
		Fixed operator*(const Fixed &mul) const;
		Fixed operator/(const Fixed &div) const;

		Fixed operator++(int);
		Fixed &operator++(void);
		Fixed operator--(int);
		Fixed &operator--(void);

		static Fixed &min(Fixed &num1, Fixed &num2);
		static const Fixed &min(const Fixed &num1, const Fixed &num2);
		static Fixed &max(Fixed &num1, Fixed &num2);
		static const Fixed &max(const Fixed &num1, const Fixed &num2);

		int toInt(void) const;
		float toFloat(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif
