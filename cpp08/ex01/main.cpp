#include "Span.hpp"

int main()
{
	Span span(6);
	try {
		span.addNumber(15);
		std::cout << span.shortestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	span.ft_print();

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(-3);
	sp.addNumber(15);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}