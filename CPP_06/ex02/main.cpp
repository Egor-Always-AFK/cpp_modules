#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "cstdlib"
#include <iostream>

Base *generate(void)
{
	int i = std::rand() % 3 + 1;
	switch (i)
	{
	case 1:
		std::cout << "A class gen.\n";
		return dynamic_cast<Base *>(new A());
	case 2:
		std::cout << "B class gen.\n";
		return dynamic_cast<Base *>(new B());
	default:
		std::cout << "C class gen.\n";
		return dynamic_cast<Base *>(new C());
	}
	return NULL;
}

void identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "A class pointer\n";
	b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "B class pointer\n";
	c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "C class pointer\n";
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "A class reference!\n";
	}
	catch(const std::exception& e)
	{	}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "B class reference!\n";
	}
	catch(const std::exception& e)
	{	}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "C class reference!\n";
	}
	catch(const std::exception& e)
	{	}
}


int main()
{
	Base *p;
	for (int i = 0; i < 10; ++i) {

		p = generate();
		if (p != NULL)
		{
			identify(p);
			identify(*p);
		}

		std::cout << "\n";
		delete p;
	}
	return (0);	
}