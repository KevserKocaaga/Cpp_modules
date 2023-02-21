#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    if(ac <= 2)
    {
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            av[i][j] = toupper(av[i][j]);
            std::cout << av[i][j];
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}
