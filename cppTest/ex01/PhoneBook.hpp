#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int	i;

	public:
		Contact contacts[8];
		PhoneBook();
		void add();
		void search();
		void exit();
		void searchPrint(std::string attribute);

};

#endif