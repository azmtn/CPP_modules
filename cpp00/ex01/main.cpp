#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (true)
	{
		std::cout << "Enter command: EXIT, ADD or SEARCH" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT")
			std::exit(1);
		else if (cmd == "ADD")
			phoneBook.add_contact();
		else if (cmd == "SEARCH")
		{
			phoneBook.print_table();
			phoneBook.search();
		}
		else
			std::cout << "command not found" << std::endl;
	}
}