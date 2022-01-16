#include "Zombie.hpp"

int	main()
{
	int num = 4;
	Zombie	*horde = zombieHorde(num, "Border");
	delete [] horde;
	return (0);
}