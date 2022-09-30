#include "phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}

void Phonebook::get_contact()
{
	if (index == 0)
		std::cout << "Please add at least one contact before searching!\n";
	else
	{
		std::cout << "Please enter index of searching element(or 0 for exit)\n>>";
		std::string input;
		std::getline(std::cin, input);
		if (input.compare("0") == 0)
			return ;
		int index = std::atoi(input.c_str());
		if (index - 1 >= this->index)
			std::cout << "I have only " << this->index << " contacts.\n";
		else if (index <= 8)
		{
			std::cout << "|-------------------------------------------|\n";
			std::cout << "|Index     |First Name|Last Name |Nickname  |\n";
			std::cout << "|-------------------------------------------|\n";
			contact_book[index - 1].getContact(index);
			std::cout << "|-------------------------------------------|\n";
		}	 
		else
			std::cout << "Exiting search proccess." << std::endl;
		input.clear();
	}
}

void Phonebook::add_contact()
{
	if (index != 8)
	{
		std::cout << "Adding contact №" << index + 1 << "\n";
		contact_book[index].set_Contact();
		index++;
	}
	else
	{
		std::cout << "Ur phonebook is full. Delete first contact?\nEnter:\n0 - exit\n1 - delete\n>>";
		std::string input;
		getline(std::cin, input);
		if (input.compare("0") == 0)
			std::cout << "Okey!\nSee u later :)";
		else if (input.compare("1") == 0)
		{
			for (int i = 1; i < 8; i++)
				contact_book[i - 1] = contact_book[i];
			contact_book[7].set_Contact(); 
		}
		else
			std::cout << "Back to main menu!";
	}
}