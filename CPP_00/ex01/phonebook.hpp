#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <cstdlib>

class Phonebook
{
	private:
		Contact contact_book[8];
		int index;

	public:
		Phonebook();
		void get_contact();
		int get_id();
		void set_contact();
		void add_contact();
};

#endif