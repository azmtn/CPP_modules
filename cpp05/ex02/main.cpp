#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void test(Bureaucrat bur)
{
	ShrubberyCreationForm shrubbery("__shrubbery__");
	bur.executeForm(shrubbery);
	bur.signForm(shrubbery);
	bur.executeForm(shrubbery);
	std::cout << "__________________________________________" << std::endl;
	RobotomyRequestForm robotomy("__robotomy__");
	bur.signForm(robotomy);
	bur.executeForm(robotomy);
	std::cout << "__________________________________________" << std::endl;
	PresidentialPardonForm presidential("__presidential__");
	bur.signForm(presidential);
	bur.executeForm(presidential);
	std::cout << "__________________________________________\n" << std::endl;
}

int main()
{
	Bureaucrat bureaucrat_1("Бюрократ_1", 1);
	Bureaucrat bureaucrat_2("Бюрократ_2", 46);

	test(bureaucrat_1);
	test(bureaucrat_2);
}