#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor\n";
	return;
}

Brain::Brain(const Brain & ref_Brain)
{
	std::cout << "Brain copy constructor\n";
	*this = ref_Brain;
	return;
}

Brain & Brain::operator=(const Brain & ref_Brain)
{
	std::cout << "Brain assignement operator\n";
	if (this == &ref_Brain)
		return *this;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = ref_Brain.ideas[i];
		i++;
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor\n";
	return;
}
