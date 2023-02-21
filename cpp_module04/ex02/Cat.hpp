#ifndef CAT_HPP
#define CAT_HPP


#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class Cat : public Animal
{
	private:
		Brain *beg;
    public:
        Cat();
		Cat(const Cat& oth);
		~Cat();
		void	operator=(const Cat& oth);
        virtual void	makeSound() const;
};

#endif