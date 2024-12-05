#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if ( nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3; 
	while (i < (nb / i))
	{
		if (nb % i == 0 )
			return (0);
		else 
			i = i + 2;
	}
	return (1);
}

void ft_not_prime_divs(int nb)
{
	int i;

	if (nb <= 0)
		nb = -1 * nb;
	if (ft_is_prime(nb) == 1)
		printf(" * %d", nb);
	else
	{
		i = 2; 
		while (i < (nb / i))
		{
			if (nb % i == 0 )
			{
				printf(" * %d ", i);
				ft_not_prime_divs(nb / i);
				break;
			}
			else 
				i++;
		}
	}
}

// 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31...
int main (void)
{
	int inum;

	inum = 236882882;
//	printf("%d\n", 48 % 1);
	if (ft_is_prime(inum) == 1)
		printf("%d is prime\n", inum);	
	else
	{
		printf("%d = 1", inum);
		ft_not_prime_divs(inum);
		printf("\n");
	}
}

