#include "deneme.hpp"

int	main(void)
{
	deneme first(24);

	first++;
	cout << first.x << endl;
}

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain()
    {
        std::cout << "Brain constructor called" << std::endl;
    }
    ~Brain()
    {
        std::cout << "Brain destructor called" << std::endl;
    }
};

class Animal
{
protected:
    std::string type;
public:
    Animal()
    {
        std::cout << "Animal constructor called" << std::endl;
    }
    virtual ~Animal()
    {
        std::cout << "Animal destructor called" << std::endl;
    }
    virtual void makeSound() = 0;
};

class Dog : public Animal
{
private:
    Brain* brain;
public:
    Dog()
    {
        type = "Dog";
        brain = new Brain();
        std::cout << "Dog constructor called" << std::endl;
    }
    ~Dog()
    {
        delete brain;
        std::cout << "Dog destructor called" << std::endl;
    }
    Dog(const Dog& other)
    {
        type = other.type;
        brain = new Brain(*other.brain);
        std::cout << "Dog copy constructor called" << std::endl;
    }
    Dog& operator=(const Dog& other)
    {
        if (this != &other)
        {
            type = other.type;
            delete brain;
            brain = new Brain(*other.brain);
        }
        std::cout << "Dog copy assignment operator called" << std::endl;
        return *this;
    }
    void makeSound() override
    {
        std::cout << "Bark!" << std::endl;
    }
};

class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat()
    {
        type = "Cat";
        brain = new Brain();
        std::cout << "Cat constructor called" << std::endl;
    }
    ~Cat()
    {
        delete brain;
        std::cout << "Cat destructor called" << std::endl;
    }
    Cat(const Cat& other)
    {
        type = other.type;
        brain = new Brain(*other.brain);
        std::cout << "Cat copy constructor called" << std::endl;
    }
    Cat& operator=(const Cat& other)
    {
        if (this != &other)
        {
            type = other.type;
            delete brain;
            brain = new Brain(*other.brain);
        }
        std::cout << "Cat copy assignment operator called" << std::endl;
        return *this;
    }
    void makeSound() override
    {
        std::cout << "Meow!" << std::endl;
    }
};

int main()
{
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; i++)
    {
        delete animals[i];
    }

    return 0;
}
