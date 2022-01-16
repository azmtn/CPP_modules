#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	setRawBits(n << _fbits);
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(n * (1 << _fbits)));
}

Fixed::Fixed(const Fixed &f)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_value = f.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &f)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << _fbits));
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> _fbits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &f) const
{
	return this->toFloat() > f.toFloat();
}

bool Fixed::operator<(const Fixed &f) const
{
	return this->toFloat() < f.toFloat();
}

bool Fixed::operator>=(const Fixed &f) const
{
	return this->toFloat() >= f.toFloat();
}

bool Fixed::operator<=(const Fixed &f) const
{
	return this->toFloat() <= f.toFloat();
}

bool Fixed::operator==(const Fixed &f) const
{
	return this->toFloat() == f.toFloat();
}

bool Fixed::operator!=(const Fixed &f) const
{
	return this->toFloat() != f.toFloat();
}

float Fixed::operator+(const Fixed &f)
{
	return this->toFloat() + f.toFloat();
}

float Fixed::operator-(const Fixed &f)
{
	return this->toFloat() - f.toFloat();
}

float Fixed::operator*(const Fixed &f)
{
	return this->toFloat() * f.toFloat();
}

float Fixed::operator/(const Fixed &f)
{
	return this->toFloat() / f.toFloat();
}

Fixed Fixed::operator++()
{
	this->setRawBits(++this->_value);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed new_fix(this->toFloat());
	this->setRawBits(++this->_value);
	return new_fix;
}

Fixed Fixed::operator--()
{
	this->setRawBits(--this->_value);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed new_fix(this->toFloat());
	this->setRawBits(--this->_value);
	return new_fix;
}

Fixed Fixed::max(Fixed &A, Fixed &B)
{
	return A._value > B._value ? A : B;
}

Fixed Fixed::max(Fixed const &A, Fixed const &B)
{
	return A._value > B._value ? A : B;
}

Fixed Fixed::min(Fixed &A, Fixed &B)
{
	return A._value < B._value ? A : B;
}

Fixed Fixed::min(Fixed const &A, Fixed const &B)
{
	return A._value < B._value ? A : B;
}