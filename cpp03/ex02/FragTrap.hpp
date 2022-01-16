#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
public:
	virtual ~FragTrap();
	FragTrap(const FragTrap &F);
	FragTrap(std::string name);
	FragTrap &operator=(const FragTrap &F);

	void	highFivesGuys(void);
};

#endif