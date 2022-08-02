#include <iostream>

int megaphone(char* argv[])
{
	int i = 1;
	int j = 0;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char) toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	return 0;
}

int main(int argc, char* argv[])
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		megaphone(argv);
	std::cout << std:: endl;
	return 0;
}
