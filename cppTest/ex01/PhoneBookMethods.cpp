#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	for (int i = 0; i < 8; i++)
		contacts[i].Index = -1;
}

