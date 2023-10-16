#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate()
{
    std::cout << "generated class is: " ;
    srand( time( NULL ) );
    switch (rand() % 3)
    {
        case 0:
            std::cout << "A" << endl;
            return new A();
        case 1:
            std::cout << "B" << endl;
            return new B();
        case 2:
            std::cout << "C" << endl;
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p)
{
    std::cout << "Identified by pointer function: ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "bad cast" << std::endl;

}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		cout << "Identified by reference function: A" << endl;
		return;
	} catch (std::bad_cast) {
	}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified by reference function: B" << std::endl;
		return;
	} catch (std::bad_cast) {

	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified by reference function: C" << std::endl;
		return;
	} catch (std::bad_cast) {

	}
}

int main() {

    Base* obj = generate();

    identify(obj);

    identify(*obj);

    delete obj;

    return 0;
}