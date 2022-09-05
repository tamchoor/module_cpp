#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	try
	{
		ShrubberyCreationForm frst("beach");
		std::cout << frst;
		Bureaucrat Boo("Boo", 14);
		std::cout << Boo;
		Boo.signForm(frst);
		std::cout << frst;
		Boo.executeForm(frst);


		// PresidentialPardonForm second("Woo");
		// std::cout << second;
		// Bureaucrat Boo("Boo", 26);
		// Boo.signForm(second);
		// std::cout << second;
		// Boo.executeForm(second);

		// RobotomyRequestForm third("Dog");
		// std::cout << third;
		// Bureaucrat Boo("Boo", 77);
		// std::cout << Boo;
		// Boo.signForm(third);
		// std::cout << third;
		// Boo.executeForm(third);

	}
	catch(const std::exception& ex)
	{
		std::cerr << "Boo " << ex.what() << std::endl;
	}
	return 0;
}
