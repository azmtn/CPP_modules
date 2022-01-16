#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Intern intern;

	try
	{
		Bureaucrat bureaucrat_1("Бюрократ", 1);
		Form *shrubbery = intern.makeForm("shrubbery creation", "таргет");
		bureaucrat_1.signForm(*shrubbery);
		bureaucrat_1.executeForm(*shrubbery);
		delete shrubbery;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form *shrubbery = intern.makeForm("таргет", "таргет");
		delete shrubbery;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}