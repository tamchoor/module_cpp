#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const std::string name,int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & ref_Bureaucrat) : _name(ref_Bureaucrat._name), _grade(ref_Bureaucrat._grade)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & ref_Bureaucrat)
{
	throw std::logic_error("Bureaucrat::HaveConstName - copy assignment imposible");
	(void) &ref_Bureaucrat;
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade--;
	}
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade++;
	}
}

void Bureaucrat::signForm(Form &ref_form)
{
	try
	{
		ref_form.beSigned(*this);
		std::cout << _name << " signs " << ref_form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << _name << " cannot sign " << ref_form.getName() << " because Bureaucrat grade = " << _grade << " < Form sighed grade = " << ref_form.getRequiredGrade() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref)
{
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: Grade too Low";
}
