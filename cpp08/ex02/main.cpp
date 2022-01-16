#include "mutantstack.hpp"

int main()
{
	MutantStack<int> bstack;

	bstack.push(23);
	bstack.push(45);
	bstack.push(53);
	bstack.push(75);
	std::cout << bstack.size() << std::endl;
	bstack.pop();
	std::cout << bstack.size() << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}