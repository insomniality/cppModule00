#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	myPhoneBook;
	std::string	input;

	while (true)
	{
		std::cout << "What should I do? : ";
		std::cin >> input; //get_line
		if (std::cin.fail()) // DZIIII!!!
			continue;
		if(input == "ADD")
		{
			myPhoneBook.add();
		} //if if if-n a aveli chist/arag te if, else if, else if, ete return ka bodyum
		else if(input.compare("SEARCH") == 0)
			myPhoneBook.search();
		else if(input.compare("EXIT") == 0)
			myPhoneBook.exit();
	}
	return (0);
	// myPhoneBook.exit();
}