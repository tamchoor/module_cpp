
#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
	return;
}

void Contact::set_last_name(std::string str)
{
	this->last_name = str;
	return;
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
	return;
}

void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
	return;
}

void Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
	return;
}

std::string Contact::get_first_name (void)
{
	return(this->first_name);
}

std::string Contact::get_last_name (void)
{
	return(this->last_name);
}

std::string Contact::get_nickname (void)
{
	return(this->nickname);
}

std::string Contact::get_phone_number (void)
{
	return(this->phone_number);
}

std::string Contact::get_darkest_secret (void)
{
	return(this->darkest_secret);
}

void Contact::set_contact_info(void)
{
	std::string line[5] = {"first_name", "last_name", \
			"nickname", "phone_number", "darkest_secret"};
	std::string str;
	int i = 0;

	while (i <= 4)
	{
		std::cout << "Enter " << line[i] << ": ";
		
		if (std::cin >> str)
		{
			if (str.empty())
			{
				continue;
			}
			if (i == 0)
				this->set_first_name(str);
			if (i == 1)
				this->set_last_name(str);
			if (i == 2)
				this->set_nickname(str);
			if (i == 3)
				this->set_phone_number(str);
			if (i == 4)
				this->set_darkest_secret(str);
		}
		else
			exit(1);
		i++;
	}
}

void Contact::show_contact_info(void)
{
	std::string line[5] = {"first_name", "last_name", \
			"nickname", "phone_number", "darkest_secret"};

	std::cout << line[0] << ": " << this->get_first_name() << std:: endl;
	std::cout << line[1] << ": " << this->get_last_name() << std:: endl;
	std::cout << line[2] << ": " << this->get_nickname() << std:: endl;
	std::cout << line[3] << ": " << this->get_phone_number() << std:: endl;
	std::cout << line[4] << ": " << this->get_darkest_secret() << std:: endl;
}
