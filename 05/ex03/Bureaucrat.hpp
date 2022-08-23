#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name,int grade);
		Bureaucrat(const Bureaucrat & ref_Bureaucrat);
		Bureaucrat & operator=(const Bureaucrat & ref_Bureaucrat);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		void signForm(Form &ref_form);
		void executeForm(Form const &ref_form);

	private:
		const	std::string _name;
		int		_grade;

};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref);

#endif