#include "Fixed.hpp"

Fixed::Fixed()
{
    fixnum = 0;
	cout << "Default constructor called" << endl;
}

Fixed::~Fixed()
{
    cout << "Destructor called"<< endl;
}

Fixed::Fixed(const Fixed& cpy)
{
	cout << "Copy constructor called" << endl;
	fixnum = cpy.getRawBits();
} 

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (fixnum);
}
void    Fixed::operator=(const Fixed& opr)
{
	fixnum = opr.fixnum;
	cout << "Copy assigment operator called" << endl;
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
    fixnum = raw;
}