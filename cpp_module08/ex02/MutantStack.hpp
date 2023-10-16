#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

using std::cout;
using std::endl;

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}

    MutantStack(const MutantStack& cpy)
    {
        *this = cpy;
    }

    MutantStack& operator=(const MutantStack&)
    {
        return *this;
    }

    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    using std::stack<T>::c;

    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
};

#endif
