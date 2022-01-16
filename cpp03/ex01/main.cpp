#include "ScavTrap.hpp"

int main()
{
	ScavTrap F("Фарамир");

	F.attack("");
	F.takeDamage(9);
	F.beRepaired(8);
	F.beRepaired(1);
	F.beRepaired(1);

	for (int i = 0; i < 4; ++i)
		F.attack("Назгул(а)");

	F.takeDamage(10);
	F.guardGate();
	F.takeDamage(1);
	F.beRepaired(1);

	ScavTrap B("Боромир");
	B.guardGate();
	ScavTrap C(B);

	return (0);
}