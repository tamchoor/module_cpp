#include <iostream>

struct St {
    /* ... */
	St(size_t _size) 
	{
		size = _size;
	}

    char & at(size_t idx)       
	{ 
		std::cout << "not const\n";
		return str[idx]; 
	}
    char   at(size_t idx) const 
    { 
		std::cout << "const\n";
		return str[idx]; 
	}
    size_t size;
	char *str;
};

void promotion(char &) { std::cout << "char" << std::endl; }
void promotion(int  &) { std::cout << "int"  << std::endl; }
void promotion(long &) { std::cout << "long" << std::endl; }

int main(void)
{
	// St st(4);
	// char ch1 = st.at(1);

	// St const const_st(4);
	// char const &ch2 = const_st.at(0);

	short sh = 10;
	promotion(sh); 
	return 0;
}