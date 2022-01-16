#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>

class Converter
{
private:
	char	_in_char;
	int		_in_int;
	float	_in_float;
	double	_in_double;
	bool	_exp_for_char;
	bool	_exp_for_int;
	void	for_char(char in_char);
	void	for_int(long long int in_int);
	void	for_float(float in_float);
	void	for_double(double in_double);
	Converter();

public:
	Converter(char *const &str);
	Converter(const Converter &C);
	Converter &operator=(const Converter &C);
	~Converter();

	char	get_in_char() const;
	int		get_in_int() const;
	float	get_in_float() const;
	double	get_in_double() const;
	bool	get_exp_for_char() const;
	bool	get_exp_for_int() const;

	class NotConvertible: public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Converter const &C);

#endif
