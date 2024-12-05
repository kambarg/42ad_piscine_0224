#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i < nb)
	{
		if  (i * i == nb)
			return (i);
		else 
			i++;
	}
	return (0);
}

int main (void)
{
	int inum;

	inum =0;
	printf("%d %d\n", inum, ft_sqrt(inum));
}
