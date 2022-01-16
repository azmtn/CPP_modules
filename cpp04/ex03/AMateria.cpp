#include "AMateria.hpp"

AMateria::AMateria(): _type("default")
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &AM):	_type(AM._type)
{
}

AMateria& AMateria::operator=(const AMateria &AM)
{
	if (this == &AM)
		return (*this);
	_type = AM._type;
	return (*this);
}

AMateria::AMateria(std::string const & type): _type(type)
{
}

std::string const& AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	target.getName();
}
