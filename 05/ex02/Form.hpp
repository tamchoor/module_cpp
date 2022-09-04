#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, std::string target, int requiredGrade, int executedGrade);
		Form(const Form &ref_form);
		Form &operator=(const Form &ref_form);
		virtual ~Form();

		void beSigned(Bureaucrat &ref_bureaucrat);
		void execute(Bureaucrat const &executor) const;
		virtual void executeConcreteForm() const = 0;

		std::string getName() const;
		std::string getTarget() const;
		bool getIsSigned() const;
		int getRequiredGrade() const;
		int getExecuteGrade() const;
		class GradeTooHighException: public std::exception 
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception 
		{
			virtual const char* what() const throw();
		};

	private:
		Form();
		std::string _name;
		std::string _target;
		bool _isSigned;
		int _requiredGrade;
		int _executedGrade;
};

std::ostream& operator<<(std::ostream &out, const Form &ref);

#endif