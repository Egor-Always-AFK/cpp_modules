#include "easyfind.hpp"

void printer(const int &n)
{
	std::cout << n << " ";
}

int main()
{
	{
		std::vector<int> v;
		std::deque<int> d;

		for (std::size_t i = 0; i < 10; i++)
		{
			v.push_back(i);
			d.push_back(i * i);
		}


		std::cout << "Vector:\n";
		std::for_each(v.begin(), v.end(), printer);
		std::cout << "\nQueue:\n";
		std::for_each(d.begin(), d.end(), printer);

		try
		{
			std::cout << "\nVector find result:\n" << *(easyfind(v, 5)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "Dequeue find result:\n" << *(easyfind(d, 81)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "-----VECTOR ERROR TEST-----\n";
	{
		std::vector<int> v;
		std::deque<int> d;

		for (std::size_t i = 0; i < 10; i++)
		{
			v.push_back(i);
			d.push_back(i * i);
		}


		std::cout << "Vector:\n";
		std::for_each(v.begin(), v.end(), printer);
		std::cout << "\nQueue:\n";
		std::for_each(d.begin(), d.end(), printer);

		try
		{
			std::cout << "\nVector find result:\n" << *(easyfind(v, 100)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "Dequeue find result:\n" << *(easyfind(d, 81)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "-----DEQUE ERROR TEST-----\n";
	{
		std::vector<int> v;
		std::deque<int> d;

		for (std::size_t i = 0; i < 10; i++)
		{
			v.push_back(i);
			d.push_back(i * i);
		}


		std::cout << "Vector:\n";
		std::for_each(v.begin(), v.end(), printer);
		std::cout << "\nQueue:\n";
		std::for_each(d.begin(), d.end(), printer);

		try
		{
			std::cout << "\nVector find result:\n" << *(easyfind(v, 5)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "Dequeue find result:\n" << *(easyfind(d, 1000)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "-----TWO ERROR TEST-----\n";
	{
		std::vector<int> v;
		std::deque<int> d;

		for (std::size_t i = 0; i < 10; i++)
		{
			v.push_back(i);
			d.push_back(i * i);
		}


		std::cout << "Vector:\n";
		std::for_each(v.begin(), v.end(), printer);
		std::cout << "\nQueue:\n";
		std::for_each(d.begin(), d.end(), printer);

		try
		{
			std::cout << "\nVector find result:\n" << *(easyfind(v, 100)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "Dequeue find result:\n" << *(easyfind(d, 200)) << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}