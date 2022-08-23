#include "Bureaucrat.hpp"

int	main( void )
{
	try 
	{
		Bureaucrat Qoo("Qoo", 1);
	}
	catch (std::exception & ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	try 
	{
		Bureaucrat Woo("Woo", -1);
	}
	catch (std::exception & ex)
	{
		std::cerr << "Woo " << ex.what() << std::endl;
	}

	try 
	{
		Bureaucrat Roo("Roo", 151);
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
	}
	catch (std::exception & ex)
	{
		std::cerr << "Doo " << ex.what() << std::endl;
	}

	return 0;
}