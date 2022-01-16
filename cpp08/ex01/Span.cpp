#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n)
{
	_n = n;
	if (_n > INT_MAX)
		throw std::logic_error("n > INT_MAX");
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span::~Span()
{
}

Span & Span::operator=(const Span &obj)
{
	_n = obj._n;
	_length = obj._length;
	return *this;
}

void Span::addNumber(int number)
{
	std::multiset < int > :: iterator it;
	unsigned int i = 0;
	for (it = _multiset.begin(); it != _multiset.end(); ++it) {
		i++;
	}
	_length = i;
	if(i >= _n)
		throw std::logic_error("multiset if full");
	else
		_multiset.insert(number);
}

void Span::ft_print()
{
	std::multiset < int > :: iterator it;
	for (it = _multiset.begin(); it != _multiset.end(); ++it){
		std::cout << *it << std::endl;
	}
}

int Span::longestSpan() const
{
	if(_length < 2)
	{
		throw std::logic_error("a few values");
	}
	std::multiset < int > :: iterator it;
	std::multiset < int > :: iterator it2;
	it = min_element( _multiset.begin(), _multiset.end());
	it2 = max_element( _multiset.begin(), _multiset.end());
	return *it2 - *it;
}

int Span::shortestSpan() const
{
	if(_length < 2)
	{
		throw std::logic_error("a few values");
	}
	std::multiset < int > :: iterator it;
	std::multiset < int > :: iterator it2;

	it = min_element( _multiset.begin(), _multiset.end());
	it2 = min_element( ++_multiset.begin(), _multiset.end());
	int min = *it2 - *it;
	for (;it2 != _multiset.end(); ++it2)
	{
		if(*it2 - *it <= min)
			min = *it2 - *it;
		++it;
	}
	return min;
}