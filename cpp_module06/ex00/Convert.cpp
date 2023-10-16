#include "Convert.hpp"

ScalarConverter::ScalarConverter() : type("cast"){};

ScalarConverter::~ScalarConverter(){};

ScalarConverter::ScalarConverter( const ScalarConverter &cpy )
{
	cout << "Copy constructor called" << endl;
	*this = cpy;
}

ScalarConverter& ScalarConverter::operator = ( const ScalarConverter &obj )
{
	cout << "Assigment operator overload called" << endl;
    this->type = obj.type;
	return ( *this );
}

bool ScalarConverter::is_double_check( char *str )
{
	int dot = 0;
	int i = 0;
	long double ldb;
	string st = str;

	ldb = (long double)stold( st, 0);
	if( ldb > DBL_MAX || ldb < DBL_MIN )
		return true;
	while( str[i] )
	{
		if( str[i] == '.' )
			dot++;
		i++;
	}
	if( dot > 1 )
		return true;
	i = -1;
	while ( str[++i] )
	{
		if( ( str[i] == '.' && str[i + 1] == '.' ) || ( str[i] == '.' && str[i + 1] == '.' ) )
			return true;
	}
	return false;
}

bool ScalarConverter::is_float_check( char *ch )
{
	int dot = 0;
	int f_cnt = 0;
	int i = 0;
	double db;
	string st = ch;

	db = (double) stod( st, 0);
	if( db > FLT_MAX || db < FLT_MIN )
		return true;
	while( ch[i] )
	{
		if( ch[i] == '.' )
			dot++;
		else if( ch[i] == 'f' )
			f_cnt++;
		i++;
	}
	if( dot > 1 || f_cnt > 1)
		return true;
	i = -1;
	while ( ch[++i] )
	{
		if( ( ch[i] == '.' && ch[i + 1] == 'f' ) || ( ch[i] == 'f' && ch[i + 1] == '.' ) )
			return true;
	}
	return false;
}

bool ScalarConverter::is_float( char *ch )
{
	int i = 0;

	if( ch[0] == '.' || ch[0] == 'f' )
		return false;
	else if( is_float_check( ch ) )
		return false;
	while( ch[i] )
	{
		if ( isdigit(ch[i]) || ( ch[i] == '.' || ch[i] == 'f' ) )
			i++;
		else
			return false;
	}
	i = -1;
	while ( ch[++i] )
	{
		if ( ch[i] == 'f' )
			return true;
	}
	return false;
}

bool ScalarConverter::is_int( char *ch )
{
	int i = 0;
	while( ch[i] )
	{
		if( isdigit( ch[i] ) )
			i++;
		else
			return false;
	}
	return true;
}

bool ScalarConverter::is_double( char *ch )
{
	int i = 0;

	if( ch[0] == '.' )
		return false;
	else if( is_double_check( ch ) )
		return false;
	while( ch[i] )
	{
		if ( isdigit(ch[i]) ||  ch[i] == '.' )
			i++;
		else
			return false;
	}
	return true;
}


bool ScalarConverter::is_F( char *ch )
{
	int i = -1;

	while( ch[++i] )
	{
		if( ch[i] == '.' )
		{
			i++;
			while( ch[i] == '0' )
				i++;
			if( ch[i] != 'f' && ch[i] != '0' )
				return true;
		}
	}
	return false;
}

bool ScalarConverter::is_D( char *ch )
{
	int i = -1;

	while( ch[++i] )
	{
		if( ch[i] == '.' )
		{
			i++;
			while ( ch[i] == '0' )
				i++;
			if( ch[i] != '0' && ch[i] )
				return true;
		}
	}
	return false;
}

void ScalarConverter::type_detection( char *ch )
{
	string str = ch;

	if ( str.length() == 1 && !isdigit(str[0]) )
		display_char(ch);
	else if( is_int( ch ) )
		display_int(ch);
	else if( is_float( ch ) )
		display_float(ch);
	else if( is_double( ch ) )
		display_double(ch);
	else if( str == "nan" || str == "-inf" || str == "+inf")
		display_nan_inf(ch);
	else
		throw ErrorHandle();
}

void ScalarConverter::display_char(char *ch)
{
    string str = ch;
    cout << "char: " << "'" << str << "'" << endl;
	cout << "int: " << static_cast<int>( str[0] ) << endl;
	cout << "float: " << static_cast<float >( str[0] ) << ".0f" << endl;
	cout << "double: " << static_cast<double>( str[0] ) << ".0" << endl;
}

void ScalarConverter::display_int(char *ch)
{   
    string str = ch;
    char b;
    b = static_cast<char>( stoi( str, 0 ,10 ) );
	if( isprint( b ) )
		cout << "char: " << "'" << b << "'" << endl;
	else
		cout << "char: Non displayable" << endl;
	cout << "int: " << static_cast<int>( stoi( str, 0, 10 ) ) << endl;
	cout << "float: " << static_cast<float>( stof( str, 0 ) ) << ".0f" << endl;
	cout << "double: " << static_cast<double>( stod( str, 0 ) ) << ".0" << endl;
}

void ScalarConverter::display_float(char *ch)
{
    string str = ch;
    char b;
    b = static_cast<char>( stoi( str, 0 ) );
    if( isprint( b ) )
        cout << "char: " << "'" << b << "'" << endl;
    else
        cout << "char: Non displayable" << endl;
    cout << "int: " << static_cast<int>( stoi( str, 0, 10 ) ) << endl;
    if( is_F( ch ) )
        cout << "float: " << static_cast<float>( stof( str, 0 ) ) << "f" << endl;
    else
        cout << "float: " << static_cast<float>( stof( str, 0 ) ) << ".0f" << endl;
    if( is_F( ch ) )
        cout << "double: " << static_cast<double>( stod( str, 0 ) ) << endl;
    else
        cout << "double: " << static_cast<double>( stod( str, 0 ) ) << ".0" << endl;
}

void ScalarConverter::display_double(char *ch)
{
    string str = ch;
    char b;
    b = static_cast<char>( stoi( str, 0 ) );
    if( isprint( b ) )
        cout << "char: " << "'" << b << "'" << endl;
    else
        cout << "char: Non displayable" << endl;
    cout << "int: " << static_cast<int>( stoi( str, 0, 10 ) ) << endl;
    if( is_F( ch ) )
        cout << "float: " << static_cast<float>( stof( str, 0 ) ) << "f" << endl;
    else
        cout << "float: " << static_cast<float>( stof( str, 0 ) ) << ".0f" << endl;
    if( is_F( ch ) )
        cout << "double: " << static_cast<double>( stod( str, 0 ) ) << endl;
    else
        cout << "double: " << static_cast<double>( stod( str, 0 ) ) << ".0" << endl;
}

void ScalarConverter::display_nan_inf(char *ch)
{
    string str = ch;
    cout << "char: impossible" << endl;
    cout << "int: impossible" << endl;
    cout << "float: " << ch << "f" << endl;
    cout << "double: " << ch << endl;
}