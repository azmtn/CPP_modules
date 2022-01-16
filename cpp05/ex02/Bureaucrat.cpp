#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(), _grade()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &B): _name(B._name), _grade(B._grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &B)
{
	if (this == &B)
		return (*this);

	std::string &n = const_cast<std::string &>(this->_name);
	n = B._name;
	_grade = B._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increaseGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	--_grade;
}

void Bureaucrat::decreaseGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	++_grade;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned())
		std::cout << _name << " не может подписать " << form.getName() << ", потому что эта форма уже подписана." << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << _name << " подписал " << form.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << _name << " не может подписать " << form.getName() << "; ";
			std::cout << e.what() << std::endl;
		}
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " выполняет " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " не может выполнить " << form.getName() << "; ";
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Слишком высокий ранг для бюрократа.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Слишком низкий ранг для бюрократа.");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B)
{
	out << B.getName() << "; Ранг: " << B.getGrade() << std::endl;
	return (out);
}