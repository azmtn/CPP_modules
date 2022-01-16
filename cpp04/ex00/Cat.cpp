#include "Cat.hpp"

Cat::Cat():	Animal("Cat")
{
	std::cout << "[Cat] Default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called." << std::endl;
}

Cat::Cat(const Cat &C):	Animal(C._type)
{
	std::cout << "[Cat] Copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &C)
{
	if (this == &C)
		return (*this);
	_type = C._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Miaay." << std::endl;
}