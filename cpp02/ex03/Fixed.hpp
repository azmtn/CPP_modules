#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
private:
	int					_value;
	static const int	_fbits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &f);
	Fixed(const int n);
	Fixed(const float n);;

	Fixed	&operator=(const Fixed &f);
	float	operator+(const Fixed &f);
	float	operator-(const Fixed &f);
	float	operator*(const Fixed &f);
	float	operator/(const Fixed &f);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	bool	operator==(const Fixed &f) const;
	bool	operator!=(const Fixed &f) const;
	bool	operator>(const Fixed &f) const;
	bool	operator>=(const Fixed &f) const;
	bool	operator<(const Fixed &f) const;
	bool	operator<=(const Fixed &f) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static 	Fixed max(Fixed &A, Fixed &B);
	static 	Fixed max(Fixed const &A, Fixed const &B);
	static 	Fixed min(Fixed &A, Fixed &B);
	static 	Fixed min(Fixed const &A, Fixed const &B);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif
