#include "Convert.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "You should type just one argument" << std::endl;
        return 1;
    }

    ScalarConverter converter;

    try
    {
        converter.type_detection(argv[1]);
    }
    catch (const std::exception &e)
    {
        cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

