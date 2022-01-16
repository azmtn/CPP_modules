#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
	AMateria();
public:
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &AM);
	AMateria& operator=(const AMateria &AM);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
