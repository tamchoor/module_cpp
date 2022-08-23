#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void )
{
	try
	{
		// ShrubberyCreationForm frst("beach");
		// std::cout << frst;

		// Bureaucrat Boo("Boo", 130);
		// std::cout << Boo;
		// frst.beSigned(Boo);
		// std::cout << frst;
		// frst.execute(Boo);

		// ShrubberyCreationForm sec("  ");
		// std::cout << sec;
		// std::cout << &sec;
		// std::cout << &frst;
		// sec = frst;
		// std::cout << sec;
		// std::cout << &sec;

		RobotomyRequestForm third("Dog");
		std::cout << third;
		Bureaucrat Boo("Boo", 130);
		std::cout << Boo;
		third.beSigned(Boo);
		std::cout << third;
		third.execute(Boo);

	}
	catch(const std::exception& ex)
	{
		std::cerr << "frst " << ex.what() << std::endl;
	}
	return 0;
}
