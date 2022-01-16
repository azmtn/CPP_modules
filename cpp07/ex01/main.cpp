#include <iostream>
#include "iter.hpp"

void increment(char &a)
{
	++a;
}

void increment(int &a)
{
	++a;
}

void increment(float &a)
{
	++a;
}

template<typename T>
void print(T array, int len)
{
	for (int i = 0; i < len; ++i)
		std::cout << array[i] << ' ';
	std::cout << std::endl;
}


int	main()
{
	char a[] = {'a', 'b', 'c', 'd'};
	int b[] = {2, 1, 4, 2};
	float c[] = {3.14f, 1.234f};

	print(a, 4);
	iter(a, 4, increment);
	print(a, 4);
	std::cout << "________" << std::endl;

	print(b, 4);
	iter(b, 4, increment);
	print(b, 4);
	std::cout << "________" << std::endl;

	print(c, 2);
	iter(c, 2, increment);
	print(c, 2);
	return (0);
}


