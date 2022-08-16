#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public :
		Brain(void);
		Brain(const Brain & ref_Brain);
		Brain & operator=(const Brain & ref_Brain);
		~Brain(void);

	private :
		std::string ideas[100];

};

#endif