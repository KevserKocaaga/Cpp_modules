#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template< typename type > 
void swap( type& a, type& b )
{
	type tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename type> 
type& min( type& a, type& b )
{
	if( a < b )
		return a;
	else
		return b;
}

template< typename type > 
type& max( type& a, type& b )
{
	if( a > b )
		return a;
	else
		return b;
}

#endif