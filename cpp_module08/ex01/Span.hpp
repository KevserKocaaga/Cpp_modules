#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::exception;
using std::sort;
using std::begin;
using std::end;
using std::cerr;

class Span
{
public:
	Span();
	Span( const Span& cpy );
	Span( unsigned int N );
	struct Full : public exception
	{
		const char * what() const throw()
        {
            return "Capacity is full";
        }
	};
	struct NotEnough : public exception
	{
		const char * what() const throw()
        {
            return "List does not have enough number to compare";
        }

	};
	Span& operator = ( const Span& obj );
	~Span();

	void addNumber( int nb );
    void addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	int shortestSpan( void );
	int longestSpan( void );

private:
	std::vector<int> vc;
	unsigned int len;
};

#endif