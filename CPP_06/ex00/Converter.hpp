#ifndef CONVERTER_HPP
# define CONVERTER_HPP
#include <iostream>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <limits>

class Converter{
	private:
		std::string _input;
		bool _err;
		double _val;
	public:
		class BadStrException: public std::exception
		{
			const char* what() const throw();
		};
		Converter();
		Converter(const std::string &input);
		Converter(const Converter &cpy);

		~Converter();

		bool getErr(void) const;
		std::string getInput(void) const;
		double getVal(void) const;

		char getChar(void) const;
		int getInt(void) const;
		float getFloat(void) const;
		double getDouble(void) const;

		Converter &operator=(const Converter &src);
};

std::ostream &operator<<(std::ostream &out, const Converter &conv);

#endif