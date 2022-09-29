#include  "phonebook.hpp"


int main()
{
	// Phonebook book;
	Contact contact;
	std::string choise;


	while (1)
	{
		std::cout << "Enter your command:\nADD - for add element,\nSEARCH - for search element,\nEXIT - for exit\nEnter command\n>> ";
		std::getline(std::cin, choise);
		if (choise.compare("ADD") == 0)
		{
			contact.set_Contact();
		}
		else if (choise.compare("SEARCH") == 0)
		{
			// book.get_contact();
		}
		else if (choise.compare("EXIT") == 0)
		{
			std::cout << "Good bye!\n";
			break;
		}
		else
			std::cout << "\nUse ONLY [ADD, SEARCH or EXIT]!\n\n";
		choise.clear();
	}
	return (0);
}