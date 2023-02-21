#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP


#include <iostream>
#include "WrongAnimal.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
		WrongCat(const WrongCat& oth);
		~WrongCat();
		void	operator=(const WrongCat& oth);
        void	makeSound() const;
};

#endif