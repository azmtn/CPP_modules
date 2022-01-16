#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called." << std::endl;
}

Brain::Brain(const Brain &B)
{
	std::cout << "[Brain] Copy constructor called." << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		_ideas[i] = B._ideas[i];
	}
}

Brain& Brain::operator=(const Brain &B)
{
	if (this == &B)
		return (*this);
	for (int i = 0; i < 100; ++i)
	{
		_ideas[i] = B._ideas[i];
	}
	return (*this);
}