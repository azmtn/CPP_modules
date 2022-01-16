#include "Converter.hpp"
#include <limits>
#include <cmath>

Converter::Converter(): _in_char(),
						_in_int(),
						_in_float(),
						_in_double(),
						_exp_for_char(),
						_exp_for_int()
{
}

Converter::~Converter()
{
}

Converter::Converter(const Converter &C):	_in_char(C._in_char),
											_in_int(C._in_int),
											_in_float(C._in_float),
											_in_double(C._in_double),
											_exp_for_char(C._exp_for_char),
											_exp_for_int(C._exp_for_int)
{
}

Converter &Converter::operator=(const Converter &C)
{
	if (this == &C)
		return (*this);
	_in_char = C._in_char;
	_in_int = C._in_int;
	_in_float = C._in_float;
	_in_double = C._in_double;
	_exp_for_char = C._exp_for_char;
	_exp_for_int = C._exp_for_int;
	return (*this);
}

Converter::Converter(char *const &str)
{
	std::string		num = str;
	unsigned int	lenght = num.length();
	long long int	to_int;

	_exp_for_char = false;
	_exp_for_int = false;

	if (lenght == 1 && !std::isdigit(str[0]))
	{
		this->for_char(str[0]);
	}
	else if (num == "+inff" || num == "-inff" || num == "nanf"
			|| (num.find(".") == num.rfind(".") && num[lenght - 1] == 'f'))
	{
		this->for_float(static_cast<float>(atof(str)));
	}

	else if (num == "+inf" || num == "-inf" || num == "nan"
			|| num.find(".") == num.rfind("."))
	{
		this->for_double(atof(str));
	}
	else if (!(to_int = atoll(str)) && (str[0] != '0' || str[1] != '\0'))
	{
		throw NotConvertible();
	}
	else
	{
		this->for_int(to_int);;
	}
}

void Converter::for_char(char in_char)
{
	_in_char = in_char;
	_in_int = static_cast<int>(in_char);
	_in_float = static_cast<float>(in_char);
	_in_double = static_cast<double>(in_char);
}

void Converter::for_int(long long int in_int)
{
	_in_double = static_cast<double>(in_int);;
	_in_float = static_cast<float>(in_int);
	if (_in_double > std::numeric_limits<int>::max() || _in_double < std::numeric_limits<int>::min())
	{
		_exp_for_char = true;
		_exp_for_int = true;
		return ;
	}
	else if (_in_double > std::numeric_limits<char>::max() || _in_double < std::numeric_limits<char>::min())
		_exp_for_char = true;
	_in_int = in_int;
	_in_char = static_cast<char>(in_int);
}

void Converter::for_float(float in_float)
{
	_in_float = in_float;
	_in_double = static_cast<double>(in_float);
	if (std::isinf(_in_double) || std::isnan(_in_double) ||
			_in_double > std::numeric_limits<int>::max() || _in_double < std::numeric_limits<int>::min())
	{
		_exp_for_char = true;
		_exp_for_int = true;
		return ;
	}
	else if (_in_double > std::numeric_limits<char>::max() || _in_double < std::numeric_limits<char>::min())
		_exp_for_char = true;
	_in_char = static_cast<char>(in_float);
	_in_int = static_cast<int>(in_float);
}

void Converter::for_double(double in_double)
{
	_in_double = in_double;
	_in_float = static_cast<float>(in_double);
	if (std::isinf(_in_double) || std::isnan(_in_double) ||
			_in_double > std::numeric_limits<int>::max() || _in_double < std::numeric_limits<int>::min())
	{
		_exp_for_char = true;
		_exp_for_int = true;
		return ;
	}
	else if (_in_double > std::numeric_limits<char>::max() || _in_double < std::numeric_limits<char>::min())
		_exp_for_char = true;
	_in_char = static_cast<char>(in_double);
	_in_int = static_cast<int>(in_double);
}

char Converter::get_in_char() const
{
	return (_in_char);
}

int Converter::get_in_int() const
{
	return (_in_int);
}

float Converter::get_in_float() const
{
	return(_in_float);
}

double Converter::get_in_double() const
{
	return(_in_double);
}

bool Converter::get_exp_for_char() const
{
	return(_exp_for_char);
}

bool Converter::get_exp_for_int() const
{
	return(_exp_for_int);
}

const char* Converter::NotConvertible::what() const throw()
{
	return ("The Converter is impossible.");
}

std::ostream &operator<<(std::ostream &out, Converter const &C)
{
	double mod = C.get_in_double() - static_cast<double>(C.get_in_int());

	out << "char: ";
	if (C.get_exp_for_char())
		out << "impossible\n";
	else if (C.get_in_char() < 32 || C.get_in_char() > 126)
		out << "Non displayable\n";
	else
		out << "\'" << C.get_in_char() << "\'\n";

	out << "int: ";
	if (C.get_exp_for_int())
		out << "impossible\n";
	else
		out << C.get_in_int() << std::endl;

	out << "float: " << C.get_in_float();
	if (!mod)
		out << ".0";
	out << "f\n";

	out << "double: " << C.get_in_double();
	if (!mod)
		out << ".0";

	return (out);
}