#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &D);
	Dog &operator=(const Dog &D);
	virtual void makeSound() const;
};

#endif