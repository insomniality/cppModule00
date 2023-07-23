#include "PhoneBookMethods.cpp"
#include "ContactMethods.cpp"
#include <iostream>

int main()
{
	PhoneBook myPhoneBook;
	std::string input;

	while (true)
	{
		std::cout << "What should I do? : ";
		std::cin >> input; //get_line
		if (std::cin.fail())
			return (0);
		if(input == "ADD") //if if if-n a aveli chist/arag te if, else if, else if, ete return ka bodyum
			myPhoneBook.add();
		else if(input.compare("SEARCH") == 0)
			myPhoneBook.search();
		else if(input.compare("EXIT") == 0)
			myPhoneBook.exit();
	}

	// myPhoneBook.exit();
}