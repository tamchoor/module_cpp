#include "Bureaucrat.hpp"

int	main( void )
{
	try 
	{
		Bureaucrat Qoo("Qoo", 1);
		std::cout << Qoo ;
	}
	catch (std::exception & ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	try 
	{
		Bureaucrat Woo("Woo", -1);
		std::cout << Woo;
	}
	catch (std::exception & ex)
	{
		std::cerr << "Woo " << ex.what() << std::endl;
	}

	try 
	{
		Bureaucrat Roo("Roo", 151);
		std::cout << Roo << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cerr << "Roo " << ex.what() << std::endl;
	}

	try 
	{
		Bureaucrat Doo("Doo", 2);
		std::cout << Doo;
		Doo.incrementGrade();
		std::cout << Doo;
		Doo.incrementGrade();
		std::cout << Doo << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cerr << "Doo " << ex.what() << std::endl;
	}

	try 
	{
		Bureaucrat Doo("Doo", 149);
		std::cout << Doo;
		Doo.decrementGrade();
		std::cout << Doo;
		Doo.decrementGrade();
		std::cout << Doo << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cerr << "Doo " << ex.what() << std::endl;
	}

	return 0;
}