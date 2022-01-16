#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal *Array[6];
	const Dog dog;
	const Cat cat;

	for (int i = 0; i < 3; ++i)
		Array[i] = new Dog(dog);

	for (int i = 3; i < 6; ++i)
		Array[i] = new Cat(cat);

	for (int i = 0; i < 6; ++i)
		delete Array[i];

	return (0);
}