#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm &operator=(const PresidentialPardonForm &P);
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &P);
	virtual ~PresidentialPardonForm();

	void		execute(Bureaucrat const &executor) const;
};

#endif