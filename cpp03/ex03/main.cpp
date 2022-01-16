#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap F("Фарамир");

	F.attack("");
	F.takeDamage(9);
	F.beRepaired(8);
	F.beRepaired(1);
	F.attack("Назгул(а)");
	F.takeDamage(10);
	F.highFivesGuys();
	F.guardGate();
	F.whoAmI();
	F.takeDamage(1);
	F.beRepaired(1);

	return (0);
}