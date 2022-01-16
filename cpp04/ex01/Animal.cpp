#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called." << std::endl;
}

Animal::Animal(const Animal &A):	_type(A._type)
{
	std::cout << "[Animal] Copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &A)
{
	if (this == &A)
		return (*this);
	_type = A._type;
	return (*this);
}

Animal::Animal(std::string type):	_type(type)
{
	std::cout << "[Animal] Constructor with a name called." << std::endl;
}

const std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "[Animal] ..." << std::endl;
}
