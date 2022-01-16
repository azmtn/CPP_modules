#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define CONT_SIZE 8

class PhoneBook
{

private:
	Contact contacts[CONT_SIZE];

public:
	void	print_table();
	void	add_contact();
	void 	search();
};

#endif
