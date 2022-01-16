#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string _type;
	Animal(std::string type);
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &A);
	Animal &operator=(const Animal &A);
	const	std::string getType() const;
	virtual void makeSound() const;
};

#endif