#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	person;

	if (ac == 2)
		person.compline(av[1]);
	return (0);
}