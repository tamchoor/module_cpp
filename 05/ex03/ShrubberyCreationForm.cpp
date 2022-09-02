#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm","", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref_form) : Form(ref_form)
{

}

void ShrubberyCreationForm::executeConcreteForm()
{
	std::string filename = getTarget().append("_shrubbery");
	std::ofstream outfd(filename);

	if (outfd.is_open())
	{
		outfd << 
					"		___________ ¶¶¶¶¶¶¶¶¶  \n"
					"____________ ¶¶¶¶¶¶¶____¶¶¶  \n"
					"_____________ ¶¶¶¶¶__¶¶¶¶¶¶¶¶¶  \n"
					"______¶¶¶¶¶___ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶  \n"
					"___ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶¶¶  \n"
					"_ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__________¶  \n"
					"¶¶¶_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶  \n"
					"_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶  \n"
					"_____¶¶¶¶¶¶¶¶¶__ ¶¶¶____¶¶¶¶¶¶¶¶¶  \n"
					"____¶¶¶¶¶¶¶_____ ¶¶¶¶______¶¶¶¶¶¶  \n"
					"____¶¶¶¶¶_______ ¶¶¶¶_______¶¶¶¶¶  \n"
					"____¶¶¶¶_________ ¶¶¶¶______¶¶¶¶¶  \n"
					"____¶¶¶__________ ¶¶¶¶_______¶¶¶¶  \n"
					"____¶¶____________ ¶¶¶¶______¶¶¶  \n"
					"____¶¶____________ ¶¶_¶_______¶¶  \n"
					"____¶_____________ ¶¶¶¶¶______¶  \n"
					"___________________ ¶¶¶¶  \n"
					"___________________ ¶¶_¶  \n"
					"___________________ ¶¶¶¶¶  \n"
					"___________________ ¶¶¶¶¶  \n"
					"____________________ ¶¶_¶  \n"
					"____________________ ¶¶¶¶¶____¶  \n"
					"_________________ ¶__¶¶¶¶¶__¶¶  \n"
					"_________________ ¶¶¶¶¶¶¶¶¶¶¶¶¶  \n"
					"__________________ ¶¶¶¶¶¶¶¶¶ \n" ;
		outfd.close();
	}
}
