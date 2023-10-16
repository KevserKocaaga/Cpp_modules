#include "iter.hpp"

template <typename type>
void print_type(type a) {
    std::cout << a << " ";
}

int main() 
{
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "Int test: ";
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), print_type);
    std::cout << std::endl;

    std::cout << "Testing with charArray: ";
    iter(charArray, sizeof(charArray) / sizeof(charArray[0]), print_type);
    std::cout << std::endl;


    return 0;
}