#include "Fixed.hpp"

Fixed::Fixed()
{
	fixnum = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int x)
{
	fixnum = x << num_bits;
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float c)
{
	cout << "Float constructor called" << endl;
	fixnum = (int)roundf(c * (1 << num_bits));
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

float Fixed::toFloat(void) const
{
	return ((float)fixnum / (1 << num_bits));
}


int Fixed::toInt(void) const
{
	return(fixnum >> num_bits);
}

ostream& operator<<(ostream& obj, const Fixed& fix)
{
	obj << fix.toFloat();
	return (obj);
}

bool operator>(const Fixed &f1, const Fixed &f2) {
    return (f1.toFloat() > f2.toFloat());
}

bool operator<(const Fixed &f1, const Fixed &f2) {
    return (f1.toFloat() < f2.toFloat());
}

bool operator<=(const Fixed &f1, const Fixed &f2) {
    return (f1.toFloat() <= f2.toFloat());
}

bool operator>=(const Fixed &f1, const Fixed &f2) {
    return (f1.toFloat() >= f2.toFloat());
}

bool operator==(const Fixed &f1, const Fixed &f2) {
    return (f1.toFloat() == f2.toFloat());
}

bool operator!=(const Fixed &f1, const Fixed &f2) {
    return (f1.toFloat() != f2.toFloat());
}

Fixed operator+(const Fixed &f1, const Fixed &f2) {
    return Fixed(f1.toFloat() + f2.toFloat());
}

Fixed operator-(const Fixed &f1, const Fixed &f2) {
    return Fixed(f1.toFloat() - f2.toFloat());
}

Fixed operator*(const Fixed &f1, const Fixed &f2) {
    return Fixed(f1.toFloat() * f2.toFloat());
}

Fixed operator/(const Fixed &f1, const Fixed &f2) {
    return Fixed(f1.toFloat() / f2.toFloat());
}



Fixed const&	Fixed::max( Fixed const &obj1, Fixed const &obj2 )
{
	if ( obj1.toFloat() > obj2.toFloat() )
		return ( obj1 );
	return ( obj2 );
}

Fixed&	Fixed::max( Fixed& obj1, Fixed& obj2 )
{
	if ( obj1.toFloat() > obj2.toFloat() )
		return ( obj1 );
	return ( obj2 );
	
}

Fixed const&	Fixed::min( Fixed const &obj1, Fixed const &obj2 )
{
	if( obj1.toFloat() < obj2.toFloat() )
		return ( obj1 );
	return ( obj2 );
}

Fixed&	Fixed::min( Fixed& obj1, Fixed& obj2 )
{
	if ( obj1.toFloat() < obj2.toFloat() )
		return ( obj1 );
	return ( obj2 );
	
}

