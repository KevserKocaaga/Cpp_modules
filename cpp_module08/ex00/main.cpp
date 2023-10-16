#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    try 
    {
        std::vector<int> vec;

        for (int i = 0; i <= 10; i++)
            vec.push_back(i);

        int value = 5;

        std::vector<int>::iterator vec_it = easyfind(vec, value);
        std::cout << "Value " << value << " found in vector at position " << std::distance(vec.begin(), vec_it) << std::endl;

        int value2= 100;
        easyfind(vec, value2);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
