#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm():	Form("Default PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &P): Form(P.getName(), 25, 5)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &P)
{
	if (this == &P)
		return (*this);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getIsSigned())
		throw Form::NotSignedException();
	else if (bureaucrat.getGrade() > this->getGradeForExecute())
		throw Form::GradeTooLowException();
	std::cout << this->getName() << " был помилован Зафодом Библброксом." << std::endl;
}