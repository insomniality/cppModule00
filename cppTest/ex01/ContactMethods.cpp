#include "Contact.hpp"

void Contact::setIndex(int i)
{
	Index = i;
}

int Contact::getIndex()
{
	return Index;
}

void Contact::setString(std::string str, std::string attribute)
{
	if (attribute == "FN")
		FirstName = str;
	else if (attribute == "LN")
		LastName = str;
	else if (attribute == "NN")
		NickName = str;
	else if (attribute == "PN")
		PhoneNumber = str;
	else if (attribute == "DS")
		DarkestSecret = str;
}

std::string Contact::getString(std::string attribute)
{
	if (attribute == "FN")
		return (FirstName);
	else if (attribute == "LN")
		return (LastName);
	else if (attribute == "NN")
		return (NickName);
	else if (attribute == "PN")
		return (PhoneNumber);
	else if (attribute == "DS")
		return (DarkestSecret);
	return ("err");
}
