/*Create an iterated function that returns the value of a power applied to a number.
A power lower than 0 returns 0.
Overflows must not be handled.
We’ve decided that 0 power 0 will returns 1.*/

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_p;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else
	{
		nb_p = 1;
		while (power > 0)
		{
			nb_p = nb_p * nb;
			power--;
		}
	}
	return (nb_p);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 5));
}