#include <iostream>
#include <fstream>

void print_error(std::string error)
{
	std::cout << error << std::endl;
	exit(0);
}

void check(int argc, char **argv)
{
	if (argc != 4)
		print_error("Error :\nnot enough argument");
	else if (argv[2][0] == '\0' || argv[3][0] == '\0')
		print_error("Error :\nLines cant be empty");
}

std::string replace(std::string str, char **argv)
{
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	size_t pos = str.find(s1);

	while(pos != std::string::npos)
	{
		str.erase(pos, s1.size());
		str.insert(pos, s2);
		pos	= str.find(s1, pos + s2.size());
	}
	return str;
}

std::string read_file(char **argv)
{
	std::ifstream 	file(argv[1]);
	std::string		buff("");
	std::string 	str;

	if (!file.is_open())
		print_error("Error :\nopening file");
	while (std::getline(file, str))
	{
		buff += str;
		if (!file.eof())
			buff += "\n";
	}
	file.close();
	return replace(buff, argv);
}

void writing_to_file(std::string buff, std::string filename)
{
	for (int i = 0; filename[i]; ++i)
		filename[i] = toupper(filename[i]);
	std::ofstream file(filename + ".replace");
	if (!file.is_open())
		print_error("Error :\nfile does not created");
	file << buff;
	file.close();
}

int main(int argc, char **argv)
{
	std::string buff;
	check(argc, argv);
	buff = read_file(argv);
	writing_to_file(buff, argv[1]);
}