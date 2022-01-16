#include "Dog.hpp"

Dog::Dog():	Animal("Dog"), _brain(new Brain())
{
	std::cout << "[Dog] Default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called." << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &D):	Animal(D._type), _brain(new Brain(*D._brain))
{
	std::cout << "[Dog] Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &D)
{
	if (this == &D)
		return (*this);
	_type = D._type;
	delete _brain;
	_brain = new Brain(*D._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Woof-woof." << std::endl;
}