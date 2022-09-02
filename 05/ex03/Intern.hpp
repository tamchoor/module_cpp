#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Form;

class Intern
{
public:
	Intern(void);
	~Intern(void);
	Intern(const Intern &_target);
	Intern &operator=(const Intern &_target);

	Form *makeForm(std::string _name, std::string _target);
	
	private: 
		Form *makeShrubberyForm(std::string _target);
		Form *makeRobotomyForm(std::string _target);
		Form *makePresidentialForm(std::string _target);
};

#endif