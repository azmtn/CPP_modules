#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
protected:
	DiamondTrap();
public:
	virtual ~DiamondTrap();
	DiamondTrap(const DiamondTrap &D);
	DiamondTrap(std::string name);
	DiamondTrap &operator=(const DiamondTrap &D);

	void	attack(std::string const &target);
	void	whoAmI();
};

#endif