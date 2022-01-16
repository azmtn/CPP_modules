#include "Cat.hpp"

Cat::Cat():	Animal("Cat"), _brain(new Brain())
{
	std::cout << "[Cat] Default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called." << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &C):	Animal(C._type), _brain(new Brain(*C._brain))
{
	std::cout << "[Cat] Copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &C)
{
	if (this == &C)
		return (*this);
	_type = C._type;
	delete _brain;
	_brain = new Brain(*C._brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Miaay." << std::endl;
}