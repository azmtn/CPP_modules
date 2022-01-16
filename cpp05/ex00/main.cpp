#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	bureaucrat("Бюрократ_1", 2);
		std::cout << bureaucrat;
		bureaucrat.increaseGrade();
		std::cout << bureaucrat;
		bureaucrat.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	bureaucrat("Бюрократ_2", 149);
		std::cout << bureaucrat;
		bureaucrat.decreaseGrade();
		std::cout << bureaucrat;
		bureaucrat.decreaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toHigh("Бюрократ_3", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toLow("Бюрократ_4", 420);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

