#include "Point.hpp"

Point::Point():	_x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point( const Fixed x, const Fixed y) : _x(x), _y(y)
{
}

Point::Point(const Point& p):	_x(p.getX()), _y(p.getY())
{
}

Point::Point(const float x, const float y):	_x(x), _y(y)
{
}

Point& Point::operator=(const Point& p)
{
	Fixed &x = const_cast<Fixed &>(this->_x);
	Fixed &y = const_cast<Fixed &>(this->_y);

	x = p.getX();
	y = p.getY();
	return (*this);
}

bool Point::operator==(const Point& p) const
{
	return (_x == p.getX() && _y == p.getY());
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}