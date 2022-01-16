#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

void Contact::set_first_name()
{
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		std::exit(1);
}

void Contact::set_last_name()
{
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		std::exit(1);
}

void Contact::set_nickname()
{
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		std::exit(1);
}

void Contact::set_phone_number()
{
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		std::exit(1);
}

void Contact::set_darkest_secret()
{
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		std::exit(1);
}

std::string	Contact::get_first_name()
{
	return first_name;
}

std::string	Contact::get_last_name()
{
	return last_name;
}

std::string	Contact::get_nickname()
{
	return nickname;
}

std::string	Contact::get_phone_number()
{
	return phone_number;
}

std::string	Contact::get_darkest_secret()
{
	return darkest_secret;
}

void	Contact::print()
{
		std::cout << std::setw(10) << cut(first_name) << '|';
		std::cout << std::setw(10) << cut(last_name) << '|';
		std::cout << std::setw(10) << cut(nickname) << '|' << std::endl;
}

void Contact::clear()
{
	first_name.clear();
	last_name.clear();
	nickname.clear();
	phone_number.clear();
	darkest_secret.clear();
}

std::string Contact::cut(std::string str)
{
	if (str.length() < 10)
		return str.substr(0, 10);
	return str.substr(0, 9) + '.';
}
