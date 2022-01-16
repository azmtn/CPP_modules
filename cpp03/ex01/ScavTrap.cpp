#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("", 100, 50, 20)
{
	std::cout << "[ScavTrap] Вызван конструктор по умолчанию." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &S): ClapTrap(S._name, S._hitPoint, S._energyPoint, S._attackDamage)
{
	std::cout << "[ScavTrap] Вызван конструктор копирования. " << _name << " создан." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "[ScavTrap] " << _name << " создан." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &S)
{
	if (this == &S)
		return (*this);
	this->_name = S._name;
	this->_hitPoint = S._hitPoint;
	this->_energyPoint = S._energyPoint;
	this->_attackDamage = S._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << _name << " деструктивирован." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "[ScavTrap] " << _name << " атакует " << target << ", нанося " << _attackDamage << " единиц урона!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "[ScavTrap] " << _name << " вошел в режим защиты." << std::endl;
}
