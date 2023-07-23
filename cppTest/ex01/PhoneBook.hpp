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
		void searchPrint(int a, int b);
};