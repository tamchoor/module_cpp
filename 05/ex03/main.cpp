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
		frst->beSigned(Boo);
		Boo.signForm(*frst);
		std::cout << *frst;
		frst->execute(Boo);
		Boo.executeForm(*frst);

		Form * fourth = intern1.makeForm("formNames[2]", "Doo");
		fourth->beSigned(Boo);
	}
	catch(const std::exception& ex)
	{
		std::cerr << "frst " << ex.what() << std::endl;
	}
	return 0;
}
