#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		// static std::string field[5];
		std::string information[11];
		enum index
		{
			Firstname = 0,
			Lastname,
			Phonenumber,
			Nickname,
			Secret
		};
	public:
		Contact();
		void set_Contact();
		void getContact(int index);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_phonenumber();
		std::string get_nickname();
		std::string get_darksest_secret();
};

#endif