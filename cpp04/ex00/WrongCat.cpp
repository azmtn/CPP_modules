#include "WrongCat.hpp"

WrongCat::WrongCat():	WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &C):	WrongAnimal(C._type)
{
	std::cout << "[WrongCat] Copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &C)
{
	if (this == &C)
		return (*this);
	_type = C._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "[WrongCat] Miaa'y." << std::endl;
}