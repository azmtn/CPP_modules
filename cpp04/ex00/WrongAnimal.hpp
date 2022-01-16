#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	WrongAnimal(std::string type);
	std::string _type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &A);
	WrongAnimal& operator=(const WrongAnimal &A);
	const std::string getType() const;
	void makeSound() const;
};

#endif