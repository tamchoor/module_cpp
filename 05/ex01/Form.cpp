#include "Form.hpp"

Form::Form() : _name(""), _isSigned(0), _requiredGrade(0), _executedGrade(0)
{

}

Form::Form(std::string name,int requiredGrade, int executedGrade) : _name(name), _isSigned(0), _requiredGrade(requiredGrade), _executedGrade(executedGrade)
{
	if (requiredGrade < 1 || executedGrade < 1)
		throw std::logic_error("Form::GradeTooHighException");
	else if (requiredGrade > 150 || executedGrade < 1)
		throw std::logic_error("Form::GradeTooLowException");
}

Form::Form(const Form &ref_form) : _name(ref_form._name), _isSigned(ref_form._isSigned), _requiredGrade(ref_form._requiredGrade), _executedGrade(ref_form._executedGrade)
{

}

Form &Form::operator=(const Form &ref_form)
{
	throw std::logic_error("Form::HaveConstVals - copy assignment imposible");
	(void) &ref_form;
	return *this;
}

Form::~Form()
{

}

void Form::beSigned(Bureaucrat &ref_bureaucrat)
{
	if (ref_bureaucrat.getGrade() <= this->_requiredGrade)
		this->_isSigned = 1;
	else 
		throw std::logic_error("Form::GradeTooLowException in beSigned");
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getIsSigned() const
{
	return this->_isSigned;
}

int Form::getRequiredGrade() const
{
	return this->_requiredGrade;
}

int Form::getExecuteGrade() const
{
	return this->_executedGrade;
}

std::ostream& operator<<(std::ostream &out, const Form &ref)
{
	out << " Form name : " << ref.getName() \
	<< "\n is Signed : " << ref.getIsSigned() \
	<< "\n Required grade : " << ref.getRequiredGrade() \
	<< "\n Executed grade : " << ref.getExecuteGrade()  << std::endl;
	return (out);
}

