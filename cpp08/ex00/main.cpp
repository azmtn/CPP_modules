#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	{
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(17);
		lst.push_back(21);
		lst.push_back(42);

		std::cout << "Work with the list" << std::endl;
		try
		{
			std::cout << "Try to found 42" << std::endl;
			std::cout << easyfind(lst, 42) << " is found" << std::endl;
			std::cout << "Try to found 3" << std::endl;
			std::cout << easyfind(lst, 3) << " is found" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int> vct;
		vct.push_back(1);
		vct.push_back(17);
		vct.push_back(21);
		vct.push_back(42);
		vct.push_back(38);

		std::cout << "Work with the vector" << std::endl;
		try
		{
			std::cout << "Try to found 3" << std::endl;
			std::cout << easyfind(vct, 3) << " is found" << std::endl;
			std::cout << "Try to found 17" << std::endl;
			std::cout << easyfind(vct, 17) << " is found" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}

