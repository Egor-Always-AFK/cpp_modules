#include "Converter.hpp"

Converter::Converter()
{   }

Converter::Converter(std::string input) : _input(input)
{
	_double = atof(_input.c_str());
	convert();
}

Converter::Converter(const Converter &cpy)
{
	*this = cpy;
}

Converter::~Converter()
{	}

Converter &Converter::operator=(const Converter &src)
{
	if (this != &src)
	{
		_char = src._char;
		_int = src._int;
		_float = src._float;
		_double = src._double;
	}
	return (*this);
}

void Converter::convert(void)
{
	void (Converter::*functionPTRS[])(void) = {&Converter::convChar, &Converter::convInt, &Converter::convFloat, &Converter::convDouble};
	int types[] = {CH, INT, FL, DO};

	int tmp = getType();

	int i;
	for (i = 0; i < 4; i++)
		if (tmp == types[i])
		{
			(this->*functionPTRS[i])();
			break;
		}
	if (i == 4)
		throw Converter::ErrorException();

}

void Converter::convChar(void)
{
	_char = static_cast<unsigned char>(_input[0]);
	_int  = static_cast<int>(getChar()); 
	_float = static_cast<float>(getChar());
	_double = static_cast<double>(getChar());
}

void Converter::convInt(void)
{
	_int = static_cast<int>(_input[0]);
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);

}