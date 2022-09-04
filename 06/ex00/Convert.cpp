#include "Convert.hpp"


Convert::Convert(std::string nbr) : _nbr(nbr), _Type(UnknownType)
{
	_Type = AnaliseType();
	setDefaultType();
}

Convert::Convert(const Convert & ref_Convert)
{
	_nbr = ref_Convert._nbr;
	_Type = ref_Convert._Type;
	_charForm = ref_Convert._charForm;
	_intForm = ref_Convert._intForm;
	_floatForm = ref_Convert._floatForm;
	_doubleForm = ref_Convert._doubleForm;
}

Convert & Convert::operator=(const Convert & ref_Convert)
{
	_nbr = ref_Convert._nbr;
	_Type = ref_Convert._Type;
	_charForm = ref_Convert._charForm;
	_intForm = ref_Convert._intForm;
	_floatForm = ref_Convert._floatForm;
	_doubleForm = ref_Convert._doubleForm;
	return *this;
}

Convert::~Convert()
{

}

int Convert::AnaliseType()
{
	int count = _nbr.length();
	int i = 0;

	if (count == 1 && !std::isdigit(_nbr[0]))
		return CharType;

	if (_nbr[i] == '+' || _nbr[i] == '-' )
		i++;
	_Type = InvalidType;
	while (i < count)
	{
		if (_nbr[i] == '.' && _Type == IntType)
			_Type = DoubleType;
		else if (_nbr[i] == 'f' && i == count - 1 && _Type == DoubleType)
			_Type = FloatType;
		else if (std::isdigit(_nbr[i]) && _Type != FloatType && _Type != DoubleType)
			_Type = IntType;
		else if (_nbr[i] == '.' || _nbr[i] == 'f' || !std::isdigit(_nbr[i]))
		{
			_Type = InvalidType;
			i = count;
		}
		i++;
	}
	if (_Type == InvalidType)
	{
		if (_nbr == "inff" || _nbr == "-inff" || _nbr == "+inff"
							|| _nbr == "nanf")
			_Type = FloatType;
		if (_nbr == "inf" || _nbr == "-inf" || _nbr == "+inf"
							|| _nbr == "nan")
			_Type = DoubleType;
	}
	return _Type;
}

void Convert::setDefaultType()
{
	std::istringstream iss(_nbr, std::istringstream::in);
	long lval;
	std::stringstream ss;
	int i = 0;

	switch (_Type)
	{
		case CharType:
			_charForm = _nbr[0];
			break;
		case IntType:
			iss >> lval;
			if (lval > std::numeric_limits<int>::max() \
			|| lval < std::numeric_limits<int>::min())
			{
				_Type = InvalidType;
				return;
			}
			_intForm = lval;
			break;
		case FloatType:
			while (_nbr[i] != 'f')
			{
				ss << _nbr[i];
				i++;
			}
			if (_nbr == "inff" || _nbr == "-inff" || _nbr == "+inff"
								|| _nbr == "nanf")
				_floatForm = atof(_nbr.c_str());
			else
				ss >> _floatForm;
			break;
		case DoubleType:
			iss >> _doubleForm;
			break;
		default:
			break;
	}
}

char Convert::castToChar()
{
	switch (_Type)
	{
		case CharType:
			break;
		case IntType:
			_charForm = static_cast<char>(this->_intForm);
			break;
		case FloatType:
			_charForm = static_cast<char>(this->_floatForm);
			break;
		case DoubleType:
			_charForm = static_cast<char>(this->_doubleForm);
			break;
		default:
			throw std::logic_error("impossible");
	}
	if ( std::isnan(_doubleForm) || std::isinf(_doubleForm) || std::isnan(_floatForm) || std::isinf(_floatForm))
		throw std::logic_error("impossible");
	if (!std::isprint(_charForm))
		throw std::logic_error("Non displayable");
	return _charForm;
}


int Convert::castToInt()
{
	switch (_Type)
	{
		case CharType:
			_intForm = static_cast<int>(_charForm);
			break;
		case IntType:
			break;
		case FloatType:
			_intForm = static_cast<int>(this->_floatForm);
			break;
		case DoubleType:
			_intForm = static_cast<int>(this->_doubleForm);
			break;
		default:
			throw std::logic_error("impossible");
	}
	if ( _Type == FloatType && (std::isnan(_floatForm) || std::isinf(_floatForm)))
		throw std::logic_error("impossible");
	if ( _Type == DoubleType && (std::isnan(_doubleForm) || std::isinf(_doubleForm)))
		throw std::logic_error("impossible");
	return _intForm;

}

float Convert::castToFloat()
{
	switch (_Type)
	{
		case CharType:
			_floatForm = static_cast<float>(_charForm);
			return _floatForm;
		case IntType:
			_floatForm = static_cast<float>(this->_intForm);
			return _floatForm;
		case FloatType:
			return _floatForm;
		case DoubleType:
			_floatForm = static_cast<float>(this->_doubleForm);
			return _floatForm;
		default:
			throw std::logic_error("impossible");
	}
	return 0;
}


double Convert::castToDouble()
{
	switch (_Type)
	{
		case CharType:
			_doubleForm = static_cast<double>(_charForm);
			return _doubleForm;
		case IntType:
			_doubleForm = static_cast<double>(this->_intForm);
			return _doubleForm;
		case FloatType:
			_doubleForm = static_cast<double>(this->_floatForm);
			return _doubleForm;
		case DoubleType:
			return _doubleForm;
		default:
			throw std::logic_error("impossible");
	}
	return 0;
}
