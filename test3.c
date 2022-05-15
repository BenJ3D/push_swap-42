#include "includes/push_swap.h"

int main(int ac, char **av) //TODO tester les args en entree
{
	int i;

	i = 1;
	ac--;
	while (ac-- > 0)
		printf ("%i\n", atoi(av[i++]));
	return (0);
}
