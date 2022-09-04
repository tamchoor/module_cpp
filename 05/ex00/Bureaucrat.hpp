#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	public:
		
		Bureaucrat(const std::string name,int grade);
		Bureaucrat(const Bureaucrat & ref_Bureaucrat);
		Bureaucrat & operator=(const Bureaucrat & ref_Bureaucrat);
		~Bureaucrat();

		std::string getName() const;
		unsigned getGrade() const;
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception 
		{
			virtual const char* what() const throw();
		};

	private:
		Bureaucrat();
		const	std::string _name;
		int		_grade;

};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref);

#endif