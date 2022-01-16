#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("", 100, 100, 30)
{
	std::cout << "[FragTrap] Вызван конструктор по умолчанию." << std::endl;
}

FragTrap::FragTrap(const FragTrap &F): ClapTrap(F._name, F._hitPoint, F._energyPoint, F._attackDamage)
{
	std::cout << "[FragTrap] Вызван конструктор копирования. " << _name << " создан." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "[FragTrap] " << _name << " создан." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &S)
{
	if (this == &S)
		return (*this);
	this->_name = S._name;
	this->_hitPoint = S._hitPoint;
	this->_energyPoint = S._energyPoint;
	this->_attackDamage = S._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << _name << " деструктивирован." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] " << _name << " дал пятюню." << std::endl;
}
