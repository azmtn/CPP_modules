#include "Form.hpp"

Form::Form(): _name(), _is_signed(false), _for_sign(150), _for_execute(150)
{
}

Form::Form(std::string name, int for_sign, int for_execute): _name(name), _is_signed(false), _for_sign(for_sign), _for_execute(for_execute)
{
	if (for_sign < 1 || for_execute < 1)
		throw Form::GradeTooHighException();
	else if (for_sign > 150 || for_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{}

Form::Form(const Form &F): _name(F._name), _is_signed(F._is_signed), _for_sign(F._for_sign), _for_execute(F._for_execute)
{}

Form &Form::operator=(const Form &F)
{
	if (this == &F)
		return (*this);
	*(const_cast<std::string *>(&_name)) = F.getName();
	*(const_cast<int *>(&_for_sign)) = F.getGradeForSign();
	*(const_cast<int *>(&_for_execute)) = F.getGradeForExecute();
	_is_signed = F.getIsSigned();
	return *this;
}


std::string Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _is_signed;
}

int	Form::getGradeForSign() const
{
	return _for_sign;
}

int Form::getGradeForExecute() const
{
	return _for_execute;
}


void Form::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() < _for_sign + 1)
		_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Слишком высокий ранг для формы.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Слишком низкий ранг для формы.");;
}

const char *Form::AnotherException::what() const throw()
{
	return ("Произошла критическая ошибка.");
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Форма не подписана.");
}

std::ostream &operator<<(std::ostream &out, const Form &F)
{
	out << "Форма: " << F.getName() << "\nРанг, необходимый для выполнения: ";
	out << F.getGradeForExecute() << "	\nРанг, необходимый для подписи: ";
	out << F.getGradeForSign();
	if (F.getIsSigned())
		out << "\nФорма подписана." << std::endl;
	else
		out << "\nФорма не подписана." << std::endl;
	return (out);
}