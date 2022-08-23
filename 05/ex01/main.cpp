#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	try
	{
		Form frst("fsrt", 160, 120);
		std::cout << frst;
	}
	catch(const std::exception& ex)
	{
		std::cerr << "frst " << ex.what() << std::endl;
	}

	try
	{
		Form frst("fsrt", 130, 0);
		std::cout << frst;
	}
	catch(const std::exception& ex)
	{
		std::cerr << "frst " << ex.what() << std::endl;
	}
	
	try 
	{
		Bureaucrat Doo("Doo", 146);
		std::cout << Doo;
		Doo.incrementGrade();
		std::cout << Doo;

		Form frst("fsrt", 143, 120);
		std::cout << frst;
		Form secnd("second", 147, 12);
		std::cout << secnd;

		secnd.beSigned(Doo);
		std::cout << secnd;
		Doo.signForm(secnd);

		frst.beSigned(Doo);
		std::cout << frst;
		Doo.signForm(frst);
		

	}
	catch (std::exception & ex)
	{
		std::cerr << "Doo " << ex.what() << std::endl;
	}

	return 0;
}