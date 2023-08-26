#ifndef PHONEBOOKMETHODS_HPP
# define PHONEBOOKMETHODS_HPP

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		contacts[i].setIndex(-1);
	i = 0;
}

void PhoneBook::add()
{
	std::string buff;

	contacts[i].setIndex(i);
	std::cout << "Enter your First Name : ";
	std::cin >> buff;
	if (std::cin.fail())
		return ;
	contacts[i].setString(buff, "FN");
	
	std::cout << "Enter your Last Name : ";
	std::cin >> buff;
	if (std::cin.fail())
		return ;
	contacts[i].setString(buff, "LN");

	std::cout << "Enter your Nick Name : ";
	std::cin >> buff;
	if (std::cin.fail())
		return ;
	contacts[i].setString(buff, "NN");

	std::cout << "Enter your Phone Number : ";
	std::cin >> buff;
	if (std::cin.fail())
		return ;
	contacts[i].setString(buff, "PN");
	
	std::cout << "Enter your Darkest Secret : ";
	std::cin >> buff;
	if (std::cin.fail())
		return ;
	contacts[i].setString(buff, "DS");

	i++;
	i = i % 8;
}

void PhoneBook::searchPrint(std::string attribute)
{
	std::string buff;

	buff = attribute;
	if (buff.length() > 10)
	{
		buff.insert(9, ".");
		buff.resize(10);
	}
	else
		for (int k = 0; k < 10 - attribute.length(); k++) //TPEL CHEREZ NOR TOX FULL INFON, 10 SYMBOL + .Y TANEL ARAJIN ANGAM TPELU VRA
			buff.insert(0, " ");
	std::cout << buff + "|";
}

void PhoneBook::search()
{
	int j;
	//demic to sagh tpi
	std::cout << "# |       NAME|   SURNAME|  NICKNAME|\n";
	for (int i = 0; i < 8; i++)
	{
		// std::cout << contacts[i].FirstName + " | "; //POXEL GETTERNEROV
		// std::cout << contacts[i].LastName + " | ";
		// std::cout << contacts[i].NickName + " | ";
		// std::cout << std::endl;
		if (contacts[i].getIndex() != -1)
		{
			std::cout << contacts[i].getIndex() << " | ";
			searchPrint(contacts[i].getString("FN"));
			searchPrint(contacts[i].getString("LN"));
			searchPrint(contacts[i].getString("NN"));
			std::cout << "\n";
		}
	}


	std::cout << "Enter Index : ";
	std::cin >> j;
	// if (std::cin.fail())
	// 	return ;
	if (j < 0 || j > 7 || std::cin.fail())
		std::cout << "Invalid input" << std:: endl;
	// searchPrint(&buff, contacts[i].Index);
	std::cout << "FIRST NAME: ";
	std::cout << contacts[j].getString("FN");
	std::cout << std::endl << "LAST NAME: ";
	std::cout << contacts[j].getString("LN");
	std::cout << std::endl << "NICK NAME: ";
	std::cout << contacts[j].getString("NN");
	std::cout << std::endl << "PHONE NUMBER: ";
	std::cout << contacts[j].getString("PN");
	std::cout << std::endl << "DARKEST SECRET: ";
	std::cout << contacts[j].getString("DS");
	std::cout << std::endl;
	i = i % 8;
	
}

void PhoneBook::exit()
{
	std::exit(1);
}

#endif