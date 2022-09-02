#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	try
	{
		// ShrubberyCreationForm frst("beach1");
		// std::cout << frst;
		// Bureaucrat Boo("Boo", 123);
		// std::cout << Boo;
		// frst.beSigned(Boo);
		// std::cout << frst;
		// frst.execute(Boo);


		PresidentialPardonForm second("Woo");
		std::cout << second;
		Bureaucrat Boo("Boo", 5);
		second.beSigned(Boo);
		Boo.signForm(second);
		std::cout << second;
		Boo.executeForm(second);
		second.execute(Boo);

		// RobotomyRequestForm third("Dog");
		// std::cout << third;
		// Bureaucrat Boo("Boo", 13);
		// std::cout << Boo;
		// third.beSigned(Boo);
		// std::cout << third;
		// third.execute(Boo);

	}
	catch(const std::exception& ex)
	{
		std::cerr << "Boo " << ex.what() << std::endl;
	}
	return 0;
}
