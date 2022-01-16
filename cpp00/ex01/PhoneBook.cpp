#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::print_table()
{
	std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < CONT_SIZE; i++)
	{
		if (!contacts[i].get_first_name().empty())
		{
			std::cout << '|' << std::setw(10) << i + 1 << '|';
			contacts[i].print();
		}
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void PhoneBook::add_contact()
{
	for (int i = CONT_SIZE - 1; i > 0; i--)
		contacts[i] = contacts[i - 1];
	contacts[0].clear();
	while (contacts[0].get_first_name().empty())
	{
		std::cout << "Enter first name: ";
		contacts[0].set_first_name();
	}
	while (contacts[0].get_last_name().empty())
	{
		std::cout << "Enter last name: ";
		contacts[0].set_last_name();
	}
	while (contacts[0].get_nickname().empty())
	{
		std::cout << "Enter nickname: ";
		contacts[0].set_nickname();
	}
	while (contacts[0].get_phone_number().empty())
	{
		std::cout << "Enter phone number: ";
		contacts[0].set_phone_number();
	}
	while (contacts[0].get_darkest_secret().empty())
	{
		std::cout << "Enter darkest secret: ";
		contacts[0].set_darkest_secret();
	}
}

void PhoneBook::search()
{
	int index;
	std::string str;

	std::cout << "Enter the index of the desired entry: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		std::exit(1);
	try {
		index = std::stoi(str) - 1;
	}
	catch(std::invalid_argument) {
		std::cout << "Invalid index" << std::endl;
		return;
	}

	if (index < 0 || index > 7 || contacts[index].get_first_name().empty())
	{
		std::cout << "Invalid index" << std::endl;
	}
	else
	{
		std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
		std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
	}
}

