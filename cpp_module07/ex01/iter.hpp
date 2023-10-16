#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;

template< typename T > void iter( T* arr,  size_t len, void (*call_function)(T const& itr))
{
	size_t i = 0;

	while( i < len )
		call_function( arr[i++] );
}

#endif