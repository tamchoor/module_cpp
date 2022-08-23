#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern &_target)
{
	(void) _target;
}

Intern &Intern::operator=(const Intern &_target)
{
	(void) _target;
	return *this;
}

Form *Intern::makeShrubberyForm(std::string _target)
{
	return new ShrubberyCreationForm(_target);
}

Form *Intern::makeRobotomyForm(std::string _target)
{
	return new RobotomyRequestForm(_target);
}

Form *Intern::makePresidentialForm(std::string _target)
{
	return new PresidentialPardonForm(_target);
}

Form * Intern::makeForm(std::string _name, std::string _target)
{
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	Form *(Intern::*makeForms[3])(std::string target) = {
			&Intern::makeShrubberyForm,
			&Intern::makeRobotomyForm,
			&Intern::makePresidentialForm};

	for(int i = 0; i < 3; i++)
	{
		if (formNames[i] == _name)
		{
			std::cout << "Intern creates " << _name << std::endl;
			return (this->*makeForms[i])(_target);
		}
	}
	throw std::logic_error("Intern:FormNotFoundException");
}
