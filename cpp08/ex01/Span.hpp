#ifndef SPAN_HPP
#define SPAN_HPP
#include <set>
#include <iostream>

class Span
{
private:
	std::multiset<int> _multiset;
	unsigned int _n;
	unsigned int _length;
public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span& obj);
	Span& operator = (const Span& obj);

	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;
	void ft_print( );
};


#endif