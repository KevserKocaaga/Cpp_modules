#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP


#include <iostream>
#include "WrongAnimal.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class WrongDog : public  WrongAnimal
{
    public:
        WrongDog();
		WrongDog(const WrongDog&oth);
		~WrongDog();
		void	operator=(const WrongDog& oth);
        void makeSound() const;
};

#endif