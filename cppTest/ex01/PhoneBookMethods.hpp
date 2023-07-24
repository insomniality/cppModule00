#ifndef PHONEBOOKMETHODS_HPP
# define PHONEBOOKMETHODS_HPP

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	for (int i = 0; i < 8; i++)
		contacts[i].setIndex(-1);
}

void PhoneBook::add()
{
	std::string buff;

	contacts[i].setIndex(i);
	std::cout << "Enter your First Name : ";
	std::cin >> buff;
	contacts[i].setString(buff, "FN");
	std::cout << "Enter your Last Name : ";
	std::cin >> buff;
	contacts[i].setString(buff, "LN");
	std::cout << "Enter your Nick Name : ";
	std::cin >> buff;
	contacts[i].setString(buff, "NN");
	std::cout << "Enter your Phone Number : ";
	std::cin >> buff;
	contacts[i].setString(buff, "PN");
	std::cout << "Enter your Darkest Secret : ";
	std::cin >> buff;
	contacts[i].setString(buff, "DS");
	i++;
	i = i % 8;
}

void PhoneBook::searchPrint(std::string *buff, std::string attribute)
{
	*buff = attribute;
	if (attribute.length() > 10)
	{
		buff->insert(9, ".");
		buff->resize(10);
	}
	else
	{
		for (int k = 0; k < 10 - attribute.length(); k++)
			buff->insert(0, " ");
	}
	std::cout << *buff << "|uwu" << std::endl;
}

void PhoneBook::search()
{
	int j;
	std::string buff;
	//demic to sagh tpi
	while (true)
	{
		std::cout << "Enter Index : ";
		std::cin >> j;
		
		if (j < 0 || j > 7 || std::cin.fail())
		{
			std::cout << "Invalid input" << std:: endl;
			continue ;
		}

		// searchPrint(&buff, contacts[i].Index);

		searchPrint(&buff, contacts[i].FirstName);
		searchPrint(&buff, contacts[i].LastName);
		searchPrint(&buff, contacts[i].NickName);
		if (i == 8)
			i = 0;
	}
	
}

void PhoneBook::exit()
{
	std::exit(1);
}

#endif