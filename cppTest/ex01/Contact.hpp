#include <string>

class Contact
{
	private:
		int			Index;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void setIndex(int i);
		int getIndex();
		void setString(std::string str, std::string attribute);
		std::string getString(std::string attribute);
};