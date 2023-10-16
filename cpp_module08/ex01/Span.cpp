#include "Span.hpp"

Span::Span()
{
	len = 0;
};

Span::Span( unsigned int N )
{
	vc.reserve( N );
	len = N;
};

Span::Span( const Span &cpy )
{
	*this = cpy;
};

Span& Span::operator = ( const Span &obj )
{
	this->vc = obj.vc;
	this->len = obj.len;

	return *this;
}

Span::~Span(){};


void Span::addNumber( int nb )
{
	if( vc.size() == len )
		throw Full();
	vc.push_back( nb );
}

void Span::addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {
    size_t numToAdd = std::distance(begin, end);
    if (vc.size() + numToAdd > len) {
        throw Full();
    }
    vc.insert(vc.end(), begin, end);
}

int Span::shortestSpan() {
    if (vc.size() <= 1) {
        throw NotEnough();
    }
    std::sort(vc.begin(), vc.end());
    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 1; i < vc.size(); ++i) {
        int span = std::abs(vc[i] - vc[i - 1]);
        shortest = std::min(shortest, span);  
    }
    return shortest;
}

int Span::longestSpan() {
    if (vc.size() <= 1) {
        throw NotEnough();
    }
    std::sort(vc.begin(), vc.end());
    int longest = std::abs(vc[vc.size() - 1] - vc[0]);
    return longest;
}