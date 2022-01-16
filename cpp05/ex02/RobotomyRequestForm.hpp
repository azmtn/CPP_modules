#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm &operator=(const RobotomyRequestForm &R);
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &R);
	virtual ~RobotomyRequestForm();

	void		execute(Bureaucrat const &executor) const;
};

#endif