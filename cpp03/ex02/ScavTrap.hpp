#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap &S);
	ScavTrap(std::string name);
	ScavTrap &operator=(const ScavTrap &S);

	void	attack(std::string const &target);
	void	guardGate();
};

#endif