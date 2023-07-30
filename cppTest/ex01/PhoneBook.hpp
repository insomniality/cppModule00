#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:

	public:
		Contact contacts[8];
		int	i;
		PhoneBook();
		void add();
		void search();
		void exit();
		void searchPrint(std::string attribute);

};

#endif