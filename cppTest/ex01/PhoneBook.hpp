#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int	i;
		Contact contacts[8];
	public:
		PhoneBook();
		void add();
		void search();
		void exit();
		void searchPrint(std::string *buff, std::string attribute);
};

#endif