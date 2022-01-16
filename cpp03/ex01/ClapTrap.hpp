#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
	ClapTrap();
	ClapTrap(std::string name,
			 unsigned int hitPoint,
			 unsigned int energyPoint,
			 unsigned int attackDamage);
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &C);
	ClapTrap &operator=(const ClapTrap &C);
	virtual ~ClapTrap();

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif