
#include <iostream>

int main()
{
	std::string string_with_brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &string_with_brain;
	std::string &stringREF = string_with_brain;

	std::cout << "Displaying address of the string:" << std::endl;
	std::cout << &string_with_brain << std::endl;
	std::cout << "Displaying address of the string using a pointer:" << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "Displaying address of the string using a reference:" << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "Displaying content of the string using a pointer:" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Displaying content of the string using a reference:" << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}