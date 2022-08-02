#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	int i = 0;
	std::string str;
	int flag_exit = 0;

	while(flag_exit == 0)
	{
		std::cout << "Enter command: ";
		if (std::cin >> str)
		{
			if (str == "ADD")
			{
				book.add_new_contact(i);
				if (i == 7)
					i = 0;
				else
					i += 1;
			}
			else if (str == "EXIT")
				flag_exit = 1;
			else if (str == "SEARCH")
				book.search();
		}
		else
		{
			flag_exit = 1;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n') ;
		std::cin.clear();
	}
	return 0;
}