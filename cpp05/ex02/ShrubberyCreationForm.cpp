#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():	Form("Default ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S): Form(S.getName(), 145, 137)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &S)
{
	if (this == &S)
		return (*this);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getIsSigned())
		throw Form::NotSignedException();
	else if (bureaucrat.getGrade() > this->getGradeForExecute())
		throw Form::GradeTooLowException();
	std::ofstream out(std::string(this->getName() + "_shrubbery").c_str());
	if (out.is_open())
	{
		out <<	"                                                         .      \n"
				"                                              .         ;       \n"
				"                 .              .              ;%     ;;        \n"
				"                   ,           ,                :;%  %;         \n"
				"                    :         ;                   :;%;'     .,  \n"
				"           ,.        %;     %;            ;        %;'    ,;    \n"
				"             ;       ;%;  %%;        ,     %;    ;%;    ,%'     \n"
				"              %;       %;%;      ,  ;       %;  ;%;   ,%;'      \n"
				"               ;%;      %;        ;%;        % ;%;  ,%;''       \n"
				"                `%;.     ;%;     %;'         `;%%;.%;'          \n"
				"                 `:;%.    ;%%. %@;        %; ;@%;%'             \n"
				"                    `:%;.  :;bd%;          %;@%;'               \n"
				"                      `@%:.  :;%.         ;@@%;'                \n"
				"                        `@%.  `;@%.      ;@@%;                  \n"
				"                          `@%%. `@%%    ;@@%;                   \n"
				"                            ;@%. :@%%  %@@%;                    \n"
				"                              %@bd%%%bd%%:;                     \n"
				"                                #@%%%%%:;;                      \n"
				"                                %@@%%%::;                       \n"
				"                                %@@@%(o);  . '                  \n"
				"                                %@@@o%;:(.,'                    \n"
				"                            `.. %@@@o%::;                       \n"
				"                               `)@@@o%::;                       \n"
				"                                %@@(o)::;                       \n"
				"                               .%@@@@%::;                       \n"
				"                               ;%@@@@%::;.                      \n"
				"                              ;%@@@@%%:;;;.                     \n"
				"                          ...;%@@@@@%%:;;;;,..                  \n" << std::endl;
		out.close();
	}
	else
		throw Form::AnotherException();
}