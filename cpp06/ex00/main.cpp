#include "Converter.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			Converter conv(argv[1]);
			std::cout << conv << std::endl;
		}
		else
			throw Converter::NotConvertible();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}