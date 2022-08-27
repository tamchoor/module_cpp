#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const std::string name,int grade) : _name(name)
{
	if (grade < 1)
		throw std::logic_error("Bureaucrat::GradeTooHighException"); // throw std::exception("Bureaucrat::GradeTooHighException");
	else if (grade > 150)
		throw std::logic_error("Bureaucrat::GradeTooLowException"); // throw std::exception("Bureaucrat::GradeTooLowException");
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & ref_Bureaucrat) : _name(ref_Bureaucrat._name), _grade(ref_Bureaucrat._grade)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & ref_Bureaucrat)
{
	_grade = ref_Bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw std::logic_error("Bureaucrat::GradeTooHighException"); // throw std::exception("Bureaucrat::GradeTooHighException");
	else
	{
		this->_grade--;
	}
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw std::logic_error("Bureaucrat::GradeTooLowException"); // throw std::exception("Bureaucrat::GradeTooLowException");
	else
	{
		this->_grade++;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref)
{
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return (out);
}