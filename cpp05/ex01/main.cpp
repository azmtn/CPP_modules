#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Form constitution("Конституция 1993", 10, 30);
		std::cout << constitution;
		Bureaucrat boris("Борис", 5);
		std::cout << boris;
		boris.signForm(constitution);
		std::cout << constitution;
		boris.signForm(constitution);
	}

	try
	{
		Form toHigh("Форма_0", 0, 20);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form toLow("Форма_20", 10, 199);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	{
		Form constitution("Конституция 1993", 1, 1);
		Bureaucrat leonid("Леонид", 5);
		std::cout << leonid;
		leonid.signForm(constitution);
	}
}