#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Default constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &A):	_type(A._type)
{
	std::cout << "[WrongAnimal] Copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &A)
{
	if (this == &A)
		return (*this);
	_type = A._type;
	return (*this);
}

WrongAnimal::WrongAnimal(std::string type):	_type(type)
{
	std::cout << "[WrongAnimal] Constructor with a name called." << std::endl;
}

const std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] ..." << std::endl;
}
