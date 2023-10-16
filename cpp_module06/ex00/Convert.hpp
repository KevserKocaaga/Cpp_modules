#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <limits.h>
#include <float.h>

using std::cout;
using std::endl;
using std::string;
using std::stof;
using std::stod;
using std::stoi;
using std::stold;
using std::exception;
using std::cerr;

class ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter( const ScalarConverter &cpy );

    class ErrorHandle : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Argument is invalid");
            }
    };

	ScalarConverter& operator = ( const ScalarConverter &obj );
	~ScalarConverter();
    static bool is_double_check( char *str );
    static bool is_float_check( char *ch );
    static bool is_float( char *ch );
    static bool is_int( char *ch );
    static bool is_double( char *ch );
    static bool is_F( char *ch );
    static bool is_D( char *ch );
    void type_detection( char *ch );
    void display_char(char *ch);
    void display_int(char *ch);
    void display_float(char *ch);
    void display_double(char *ch);
    void display_nan_inf(char *ch);
private:
    string type;
};

#endif