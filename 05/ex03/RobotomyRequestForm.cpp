#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm","", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref_form) : Form(ref_form)
{

}

void RobotomyRequestForm::executeConcreteForm()  const
{
	std::random_device random_device; // Источник энтропии.
	std::mt19937 generator(random_device()); // Генератор случайных чисел.
	// (Здесь берется одно инициализирующее значение, можно брать больше)

	std::uniform_int_distribution<> distribution(0, 1); // Равномерное распределение [1, 2]
	int x = distribution(generator);

	std::cout << "Drrrrrrrring noises!" << std::endl;
	if (x == 1)
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << this->getTarget() << " : robotomy failed!" << std::endl;
}
