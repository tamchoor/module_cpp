
#include "Harl.hpp"

void	error_mess(std::string str)
{
	std::cerr << str << std::endl;
	exit(1);
}

int choose_level_case(std::string level)
{
	std::string levels[4] = {"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		error_mess("Program need one argument : problem level");
	std::string level(argv[1]);
	if (level.empty())
		error_mess("Problem level is empty");
	Harl man;
	switch (choose_level_case(level))
	{
		case 0:
			std::cout << "[DEBUG]"<< std::endl;
			man.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[INFO]"<< std::endl;
			man.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[WARNING]"<< std::endl;
			man.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ERROR]"<< std::endl;
			man.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;;
	}
	return 0;
}
