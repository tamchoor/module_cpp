#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
# include <cmath>


#define CharType	1
#define IntType		2
#define FloatType	3
#define DoubleType	4
#define UnknownType	5
#define InvalidType	6

class Convert
{
	public :
		Convert(std::string nbr);
		Convert(const Convert & ref_Convert);
		Convert & operator=(const Convert & ref_Convert);
		~Convert();

		char castToChar();
		int castToInt();
		float castToFloat();
		double castToDouble();

	private :
		char _charForm;
		int _intForm;
		float _floatForm;
		double _doubleForm;

		std::string _nbr;
		int			_Type;

		int AnaliseType();
		void setDefaultType();
};

#endif