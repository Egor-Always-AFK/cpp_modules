#include "contact.hpp"

Contact::Contact()
{
	for (int i = Firstname; i <= Secret; i++)
		information[i] = std::string();
}

void Contact::set_Contact()
{
	for (int i = Firstname; i <= Secret; i++)
	{
		std::cout << "Please enter ";
		if (i == Firstname)
		{
			std::cout << "First name\n>>";
			std::getline(std::cin, information[Firstname]);
		}
		else if (i == Lastname)
		{
			std::cout << "Last name\n>>";
			std::getline(std::cin, information[Lastname]);
		}
		else if (i == Nickname)
		{
			std::cout << "Nickname\n>>";
			std::getline(std::cin, information[Nickname]);
		}
		else if (i == Phonenumber)
		{
			std::cout << "Phonenumber\n>>";
			std::getline(std::cin, information[Phonenumber]);
		}
		else if (i == Secret)
		{
			std::cout << "Darkest secret D:\n>>";
			std::getline(std::cin, information[Secret]);
		}
	}
}

void Contact::getContact(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = Firstname; i < Nickname; i++)
	{
		std::cout << "|";
		if (information[i].length() > 10)
			std::cout << information[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << information[i];
	}
	std::cout << "|" << std::endl;
}


int ft_strlen(char *src)
{
	int i = 0;
	while (src[i])
		i++;
	return(i);
}
