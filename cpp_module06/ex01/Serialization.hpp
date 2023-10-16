#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include "Data.hpp"

using std::cout;
using std::endl;
using std::string;

class Serializer
{
public:
    Serializer();
    Serializer( const Serializer &cpy );
    Serializer& operator = ( const Serializer& obj );
    ~Serializer();
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};


#endif