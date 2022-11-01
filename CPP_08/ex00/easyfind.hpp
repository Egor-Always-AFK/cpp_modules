#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <functional>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <sstream>

template <typename T>
typename T::iterator easyfind(T& cont, const int value)
{
	typename T::iterator ret;

	ret = std::find(cont.begin(), cont.end(), value);
	if (ret == cont.end())
		throw std::out_of_range("Value " + std::to_string(value) + " not found!");
	return (ret);
}

#endif 
