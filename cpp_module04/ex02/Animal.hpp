#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
    protected:
        string type;
    public:
		Animal();
		Animal(const Animal&oth);
		virtual ~Animal();
		void	operator=(const Animal& oth);
        virtual void makeSound() const = 0;
		string	getType() const;
};

#endif