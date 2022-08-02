#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void search();
		int get_count();
		void add_new_contact(int i);

	private:
		Contact people[8];
		int		count;
};

#endif