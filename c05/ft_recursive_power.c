/*Create a recursive function that returns the value of a power applied to a number.
A power lower than 0 returns 0.
Overflows must not be handled, the function return will be undefined.
We’ve decided that 0 power 0 will returns 1.*/

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
		nb_p = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb_p);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
}