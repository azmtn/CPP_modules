#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << 'C' << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << 'A' << std::endl;
	}
	catch(std::exception &ex)
	{}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << 'B' << std::endl;
	}
	catch(std::exception &ex)
	{}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << 'C' << std::endl;
	}
	catch(std::exception &ex)
	{}
}

Base *generate(void)
{
	switch (std::rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		default:
			return (new C);
	}
}

int	main()
{
	std::srand(std::time(NULL));
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;
	return (0);
}