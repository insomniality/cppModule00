#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:

	public:
		int			Index;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
		//
		void setIndex(int i);
		int getIndex();
		void setString(std::string str, std::string attribute);
		std::string getString(std::string attribute);
};

#endif