#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
private:

public:
	Intern();
	~Intern();
	Intern(const Intern &I);
	Intern &operator=(const Intern &I);

	Form *makeForm(const std::string &name, const std::string &target);

	class WrongFormNameException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif