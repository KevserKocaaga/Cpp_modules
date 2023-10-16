#include <iostream>
#include "Span.hpp"

int main() {
    
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    
    /*try 
    {
        Span mySpan(10);

        int numbersToAddArr[] = {1, 2, 3, 4, 5};
        std::vector<int> numbersToAdd(numbersToAddArr, numbersToAddArr + sizeof(numbersToAddArr) / sizeof(numbersToAddArr[0]));

        mySpan.addNumbers(numbersToAdd.begin(), numbersToAdd.end());
        int shortest = mySpan.shortestSpan();
        int longest = mySpan.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;

        std::cout << "Numbers added successfully!" << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }*/

    
    return 0;
}
