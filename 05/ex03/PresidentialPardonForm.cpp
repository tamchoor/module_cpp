
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()  : Form("PresidentialPardonForm","", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref_form)  : Form(ref_form)
{

}

void PresidentialPardonForm::executeConcreteForm()  const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
