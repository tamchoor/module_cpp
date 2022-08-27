#include "Convert.hpp"

void printFloat(Convert &cnvr)
{
	try
	{
		std::stringstream ss;

		ss << cnvr.castToFloat();
		std::string tmp = ss.str();

		if (!(tmp == "inf" || tmp == "-inf" || tmp == "+inf"
			|| tmp == "nan"))
		{
			if (tmp.find('.') == std::string::npos)
				ss << ".0";
		}
		ss << "f";
		std::cout << "Float : " << ss.str() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Float : " << e.what() << '\n';
	}
	
}

void printChar(Convert &cnvr)
{
	try
	{
		std::cout << "Char : " << cnvr.castToChar() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void printInt(Convert &cnvr)
{
	try
	{
		std::cout << "Int : " << cnvr.castToInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void printDouble(Convert &cnvr)
{
	try
	{
		std::stringstream ss;

		ss << cnvr.castToDouble();
		std::string tmp = ss.str();
		if (!(tmp == "inf" || tmp == "-inf" || tmp == "+inf"
			|| tmp == "nan"))
		{
			if (tmp.find('.') == std::string::npos)
				ss << ".0";
		}
		std::cout << "Double : " << ss.str() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Double : " << e.what() << '\n';
	}
	
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Program need only one argument\n";
	else
	{
		Convert cnvr(argv[1]);
		printChar(cnvr);
		printInt(cnvr);
		printFloat(cnvr);
		printDouble(cnvr);
	}

	return 0;
}