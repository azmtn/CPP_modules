#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	_type = type;
}

std::string const &Weapon::getType()
{
	return (_type);
}