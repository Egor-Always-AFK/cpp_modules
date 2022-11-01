#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class Span
{
	private:
		std::vector<int> _vec;
		unsigned int n;
		Span();
	public:
		class OutOfRange : public std::exception{
			const char *what() const throw();
		};

		class ToSmall : public std::exception{
			const char *what() const throw();
		};
		
		Span(unsigned int n);
		Span(const Span &cpy);

		~Span();

		Span &operator=(const Span &src);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

};

#endif 
