#include <iostream>
#include <fstream>

void	error_mess(std::string str)
{
	std::cerr << str << std::endl;
	exit(1);
}

std::string	read_text_from_file(std::string filename)
{
	std::ifstream	infd;

	infd.open(filename);
	if (!infd.is_open())
		error_mess("Error open file");
	std::string text;
	text.assign((std::istreambuf_iterator<char>(infd)), (std::istreambuf_iterator<char>()));
	infd.close();
	return text;
}

void	write_text_to_file(std::string filename, std::string text)
{
	std::ofstream	outfd;

	outfd.open(filename, std::ios::trunc);
	if (!outfd.is_open())
		error_mess("Error open file");
	outfd << text;
	outfd.close();
}

std::string	replace_words_in_text(std::string text, std::string s1, std::string s2)
{
	size_t	pos = 0;

	while (pos != std::string::npos)
	{
		pos = text.find(s1, pos);
		if (pos != std::string::npos)
		{
			text.erase(pos, s1.length());
			text.insert(pos, s2);
		}
	}
	return text;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		error_mess("The program need three parameters in the following order: a filename and two strings, s1 and s2.");
	std::string	filename(argv[1]);
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	if (filename.empty() || s1.empty() || s2.empty())
		error_mess("Filename or two strings is empty");
	std::string	text = read_text_from_file(filename);
	text = replace_words_in_text(text, s1, s2);
	std::string	filename_out = filename + ".replace";
	write_text_to_file(filename_out, text);
	return 0;
}
