#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 2; 
	while (i < (nb / 2))
	{
		if (nb % i == 0 )
			return (0);
		else 
			i++;
	}
	return (1);
}

// 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31...
int main (void)
{
	int inum;

	inum = 293;
//	printf("%d\n", 48 % 1);
	if (ft_is_prime(inum) == 1)
		printf("%d is prime\n", inum);	
	else
		printf("%d not prime\n", inum);
}
