
#include "includes/push_swap.h"


int main ()
{
	int i = 3;
	int a = 3;

	while (i >= 0)
	{
		if ((a >> i) & 1)
			printf("1");
		else
			printf("0");
		i--;
	}
	return (0);
}