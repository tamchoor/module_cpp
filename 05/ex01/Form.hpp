#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name,int requiredGrade, int executedGrade);
		Form(const Form &ref_form);
		Form &operator=(const Form &ref_form);
		~Form();

		void beSigned(Bureaucrat &ref_bureaucrat);

		std::string getName() const;
		bool getIsSigned() const;
		int getRequiredGrade() const;
		int getExecuteGrade() const;

	private:
		Form();
		const std::string _name;
		bool _isSigned;
		const int _requiredGrade;
		const int _executedGrade;
};

std::ostream& operator<<(std::ostream &out, const Form &ref);

#endif