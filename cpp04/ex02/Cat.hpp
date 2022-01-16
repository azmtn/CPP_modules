#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &C);
	Cat &operator=(const Cat &C);
	virtual void makeSound() const;
};

#endif