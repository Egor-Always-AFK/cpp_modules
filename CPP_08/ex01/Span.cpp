#include "Span.hpp"

Span::Span() : _vec(0, 0)
{
	_vec.reserve(0);
}

const char *Span::OutOfRange::what() const throw()
{
	return "Maximum element in array";
}

const char *Span::ToSmall::what() const throw()
{ 
	return "<2 elements";
}
Span::Span(unsigned int n) : _vec(0, 0)
{
	_vec.reserve(n);
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span::~Span()
{	}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_vec.clear();
		_vec.reserve(src._vec.size());
		std::copy(src._vec.begin(), src._vec.end(), _vec.begin());
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_vec.capacity() <= _vec.size())
		throw Span::OutOfRange();
	_vec.push_back(n);
}

int Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw Span::ToSmall();
	std::vector<int> _tmp(_vec);

	std::vector<int>::iterator iter;

	int tmp;
	int min = std::numeric_limits<int>::max();
	std::sort(_tmp.begin(), _tmp.end());
	for (iter = (_tmp.begin() + 1); iter != _tmp.end(); iter++)
	{
		tmp = std::abs(*(iter) - *(iter - 1));
		if (tmp < min)
			min = tmp;
	}
	return (min);
}

int Span::longestSpan()
{
	if (_vec.size() < 2)
		throw Span::ToSmall();
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> iter;
	iter = std::minmax_element(_vec.begin(), _vec.end());
	return (*iter.second - *iter.first);
}
