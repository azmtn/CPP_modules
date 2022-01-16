#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm():	Form("Default RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &R): Form(R.getName(), 72, 45)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &R)
{
	if (this == &R)
		return (*this);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getIsSigned())
		throw Form::NotSignedException();
	else if (bureaucrat.getGrade() > this->getGradeForExecute())
		throw Form::GradeTooLowException();
	if (rand() % 2)
		std::cout << "[DDRRRRRRRRRRRRRRR] " << this->getName() << " был успешно роботизирован." << std::endl;
	else
		throw Form::AnotherException();
}