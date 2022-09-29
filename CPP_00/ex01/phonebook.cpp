#include "phonebook.hpp"

void Phonebook::get_contact()
{
	if (index == 0)
		std::cout << "Please add at least one contact before searching/n!";
	else
	{
		std::cout << "Please enter index of searching element(or 0 for exit)\n>>";
		std::string input;
		std::getline(std::cin, input);
		if (input.compare("0") == 0)
			return ;
		int index = std::atoi(input.c_str());
		if (index < 8)
		{
			std::cout << "|-----------|-----------|-----------|-----------|\n";
			std::cout << "|Index      |First name |Last name  | Nickname  |\n";
			std::cout << "|-----------|-----------|-----------|-----------|\n";
			this->contact_book[index - 1].getContact(index);
		}	 
		else
			std::cout << "Exiting search proccess." << std::endl;		
	}
}