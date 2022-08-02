#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->count = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int PhoneBook::get_count(void)
{
	return this->count;
}

void PhoneBook::add_new_contact(int i)
{
	std::string str;

	if (this->get_count() <= 7)
		this->count += 1;
	this->people[i].set_contact_info();
}

std::string change_len(std::string str)
{
	std::string new_str;

	new_str = str;
	if (str.length() > 10)
	{
		new_str.insert(9, ".");
		new_str = new_str.substr(0, 10);
	}
	return new_str;
}

void PhoneBook::search()
{
	int i = 0;
	int count = this->get_count();
	std::string str;

	std::cout << "|" << std::setw(10) << "index" << "|"\
		<< "|" << std::setw(10) << "first_name" << "|"\
		<< "|" << std::setw(10) << "last_name" << "|"\
		<< "|" << std::setw(10) << "nickname" << "|\n";
	while (count > i)
	{
		std::cout<< "|" << std::setw(10) << i  << "|" \
			<< "|" << std::setw(10) << change_len(this->people[i].get_first_name()) << "|" \
			<< "|" << std::setw(10) << change_len(this->people[i].get_last_name()) << "|" \
			<< "|" << std::setw(10) << change_len(this->people[i].get_nickname()) << "|" \
			<< std:: endl;
		i++;
	}
	std::cout << "Enter index of contact to show more info :";
	if (std::cin >> i)
	{
		if (i >= 0 && i < count)
			this->people[i].show_contact_info();
		else
			std::cerr << "Entered index is not correct" << std:: endl;
	}
	else
		std::cerr << "std::cin error" << std:: endl;
}
