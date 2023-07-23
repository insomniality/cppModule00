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

	i = i % 8;
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
}

void PhoneBook::search()
{
	int j;
	std::string buff;
	//demic to sagh tpi
	while (true)
	{
		std::cin >> j;
		
		if (j < 0 || j > 7 || std::cin.fail())
		{
			std::cout << "Invalid input" << std:: endl;
			continue ;
		}

		// std::cout << contacts[i].Index;
		// std::cout << contacts[i].FirstName;
		// std::cout << contacts[i].LastName;
		// std::cout << contacts[i].NickName;
		// if (i == 8)
		// 	i = 0;
	}
	
}

void PhoneBook::searchPrint(int a, int b)
{

}

void PhoneBook::exit()
{
	std::exit(1);
}
