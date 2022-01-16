#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat &C);
	WrongCat &operator=(const WrongCat &C);
	void makeSound() const;
};

#endif