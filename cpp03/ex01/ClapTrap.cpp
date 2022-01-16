#include "ClapTrap.hpp"

ClapTrap::ClapTrap():	_name(""),
										_hitPoint(10),
										_energyPoint(10),
										_attackDamage(0)
{
	std::cout << "[ClapTrap] Вызван конструктор по умолчанию." << std::endl;
}

ClapTrap::ClapTrap(std::string name):	_name(name),
										_hitPoint(10),
										_energyPoint(10),
										_attackDamage(0)
{
	std::cout << "[ClapTrap] " << _name << " создан." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &C):	_name(C._name),
										_hitPoint(C._hitPoint),
										_energyPoint(C._energyPoint),
										_attackDamage(C._attackDamage)
{
	std::cout << "[ClapTrap] Вызван конструктор копирования. " << _name << " создан." << std::endl;
}

ClapTrap::ClapTrap(std::string name,
				unsigned int hitPoint,
				unsigned int energyPoint,
				unsigned int attackDamage): _name(name),
											_hitPoint(hitPoint),
											_energyPoint(energyPoint),
											_attackDamage(attackDamage)
{
	std::cout << "[ClapTrap] " << _name << " создан." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C)
{
	if (this == &C)
		return (*this);
	this->_name = C._name;
	this->_hitPoint = C._hitPoint;
	this->_energyPoint = C._energyPoint;
	this->_attackDamage = C._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] " << _name << " деструктивирован." << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "[ClapTrap] " << _name << " атакует " << target << ", нанося " << _attackDamage << " единиц урона!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint <= 0)
		std::cout << "[ClapTrap] " << _name <<" уже мертв." << std::endl;
	else
	{
		std::cout << "[ClapTrap] " << _name << " получает " << amount << " урон(а)." << std::endl;
		this->_hitPoint = (this->_hitPoint < amount) ? 0 : this->_hitPoint - amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint <= 0)
		std::cout << "[ClapTrap] " << _name <<" мертв, его уже не вернуть." << std::endl;
	else
	{
		this->_hitPoint += amount;
		std::cout << "[ClapTrap] " << _name << " восстановил " << amount << " едениц хп." << std::endl;
	}
}
