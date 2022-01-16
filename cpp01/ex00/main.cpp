#include "Zombie.hpp"

int main()
{
	Zombie a = Zombie();
	a.announce();

	Zombie *b  = new Zombie("Элвин");
	b->announce();
	delete (b);

	Zombie *c = newZombie("Саймон");
	delete (c);

	randomChump("Теодор");
	return (0);
}
