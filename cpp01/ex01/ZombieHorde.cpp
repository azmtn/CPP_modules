#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;
	Zombie *pZombie = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		pZombie[i].set_name(name);
		//std::cout << '[' << i + 1 << "] ";
		pZombie[i].announce();
	}
	std::cout << "Horde of zombie ready to fight" << std::endl;
	return pZombie;
}