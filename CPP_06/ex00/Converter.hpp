#ifndef CONVERTER_HPP
#define CONVERTER_HPP


#define CH 0
#define INT 1
#define FL 2
#define DO 3

#include <iostream>


class Converter
{
	private:
		const std::string _input;
		char _char;
		int _int;
		float _float;
		double _double;
	
	public:
		class ErrorException : public std::exception
		{
			virtual const char *what() const throw();
		};
		Converter();
		Converter(std::string input);
		Converter(const Converter &cpy);

		~Converter();

		Converter &operator=(const Converter &src);

		void convert(void);

		void convChar(void);
		void convInt(void);
		void convFloat(void);
		void convDouble(void);

		std::string getInput(void) const;
		char getChar(void) const;
		int getInt(void) const;
		float getFloat(void) const;
		double getDouble(void) const;
		int getType(void) const;
};

#endif 