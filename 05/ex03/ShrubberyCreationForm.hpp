#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &ref_form);
		// ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref_form);
		void executeConcreteForm();

		
};

#endif