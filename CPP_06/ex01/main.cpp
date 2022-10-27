#include <stdint.h>
// #include <cstdint> не работает на ubuntu :c 
#include "Data.hpp"
#include <iostream>


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data d;
	uintptr_t pass;
	Data *check;

	d._int = 1000;
	d._char = 'c';
	d._unsig = 4294967200;
	d._long = -2147483647;
	pass = serialize(&d);
	check = deserialize(pass);
	std::cout << "int: " << check->_int << "\nchar: " <<  check->_char << "\nunsigned: " << check->_unsig << "\nlong: " << check->_long << std::endl;
}