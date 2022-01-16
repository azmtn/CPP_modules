#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &C);
	Cat &operator=(const Cat &C);
	virtual void makeSound() const;
};

#endif