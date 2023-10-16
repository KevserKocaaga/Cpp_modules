#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::exception;

class error : public exception
{
	const char * what() const throw()
	{
		return "Value not found";
	}
};


template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value); //iki iterator (gösterici) arasında bir arama yapar ve aranan değeri bulursa, bu değeri taşıyan iterator'u döndürür. Eğer aranan değeri bulamazsa, sonuç olarak koleksiyonun sonunu (end()) işaret eden bir iterator döndürür.
    if (it == container.end()) {
        throw error();
    }
    return it;
}

#endif