#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("", 100, 50, 30),
							ScavTrap(""),
							FragTrap(""),
							_name("")
{
	std::cout << "[DiamondTrap] Вызван конструктор по умолчанию." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &D): ClapTrap(D._name, D._hitPoint, D._energyPoint, D._attackDamage),
												ScavTrap(D._name),
												FragTrap(D._name),
												_name(D._name)
{
	std::cout << "[DiamondTrap] Вызван конструктор копирования. " << _name << " создан." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name", 100, 50, 30),
											ScavTrap(name),
											FragTrap(name),
											_name(name)

{
	std::cout << "[DiamondTrap] " << _name << " создан." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &D)
{
	if (this == &D)
		return (*this);
	this->_name = D._name;
	this->_hitPoint = D._hitPoint;
	this->_energyPoint = D._energyPoint;
	this->_attackDamage = D._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] " << _name << " деструктивирован." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
	std::cout << "[DiamondTrap] " << _name << " атакует " << target << ", нанося " << _attackDamage << " единиц урона!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "[DiamondTrap]	Имя: " << _name << "." << std::endl;
	std::cout << "[ClapTrap] 	Имя: " << ClapTrap::_name << "." << std::endl;
}
