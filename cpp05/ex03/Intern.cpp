#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &I)
{
	(void)&I;
}

Intern	&Intern::operator=(const Intern &I)
{
	if (this == &I)
		return (*this);
	return (*this);
}

Form	*Intern::makeForm(const std::string &name, const std::string &target)
{
	const std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;
	while (i < 3 && name != forms[i])
		++i;
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			throw WrongFormNameException();
	}
}

const char *Intern::WrongFormNameException::what() const throw()
{
	return ("Такой формы не существует.");
}