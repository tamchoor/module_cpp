#include <iostream>
#include <string>

struct Data
{
	int		nbr;
	float	fl;
	char	ch;
	bool	bl;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.nbr = 7;
	data.fl = 777.88f;
	data.ch = 'M';
	data.bl = true;

	std::cout << data.nbr << std::endl;
	std::cout << data.fl << std::endl;
	std::cout << data.ch << std::endl;
	std::cout << data.bl << std::endl;
	std::cout << "-----------------------" << std::endl;
	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << ptr->nbr << std::endl;
	std::cout << ptr->fl << std::endl;
	std::cout << ptr->ch << std::endl;
	std::cout << ptr->bl << std::endl;
	return 0;
}