#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool 		_is_signed;
	const int	_for_sign;
	const int	_for_execute;
	Form();
public:
	Form(std::string name, const int for_sign, const int for_execute);
	~Form();
	Form(const Form &F);
	Form &operator=(const Form &F);

	std::string	getName() const;
	bool 		getIsSigned() const;
	int			getGradeForSign() const;
	int			getGradeForExecute() const;
	void		beSigned(const Bureaucrat &B);

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &F);

#endif