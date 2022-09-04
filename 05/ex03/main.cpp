#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	try
	{
		std::string formNames[3] = {
					"shrubbery creation",
					"robotomy request",
					"presidential pardon"};
		Intern intern1;

		Form * frst = intern1.makeForm(formNames[0], "home");
		Form * sec = intern1.makeForm(formNames[1], "table");
		Form * thrd = intern1.makeForm(formNames[2], "Doo");
		
		std::cout << *frst;
		std::cout << *sec;
		std::cout << *thrd;

		Bureaucrat Boo("Boo", 130);
		std::cout << Boo;
		Boo.signForm(*frst);
		std::cout << *frst;
		Boo.executeForm(*frst);

		delete frst;
		delete sec;
		delete thrd;

		Form * fourth = intern1.makeForm("formNames[2]", "Doo");
		Boo.signForm(*fourth);

		delete fourth;

		
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	return 0;
}
