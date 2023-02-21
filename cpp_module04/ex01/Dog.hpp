#ifndef DOG_HPP
#define DOG_HPP


#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class Dog : public Animal
{
    private:
		Brain *beg;
    public:
        Dog();
		Dog(const Dog&oth);
		~Dog();
		void	operator=(const Dog& oth);
        virtual void makeSound() const;
};

#endif