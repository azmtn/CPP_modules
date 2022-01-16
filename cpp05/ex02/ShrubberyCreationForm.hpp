#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &S);
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &S);
	virtual ~ShrubberyCreationForm();

	void		execute(Bureaucrat const &executor) const;
};

#endif