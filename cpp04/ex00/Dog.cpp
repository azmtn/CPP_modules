#include "Dog.hpp"

Dog::Dog():	Animal("Dog")
{
	std::cout << "[Dog] Default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called." << std::endl;
}

Dog::Dog(const Dog &D):	Animal(D._type)
{
	std::cout << "[Dog] Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &D)
{
	if (this == &D)
		return (*this);
	_type = D._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Woof-woof." << std::endl;
}