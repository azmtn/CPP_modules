#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *ptr_zombie = new Zombie(name);
	ptr_zombie->announce();
	return (ptr_zombie);
}
