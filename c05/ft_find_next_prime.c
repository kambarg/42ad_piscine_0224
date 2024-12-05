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

int ft_find_next_prime(int nb)
{
	int nextp;

	nextp = nb;
	if (nextp <= 0)
		return (0);
	else
	{
		while (nextp > 0)
		if (ft_is_prime(nextp) != 1)
			nextp ++;
		else
			return (nextp);
	}
	return(nextp);
}

// 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31...
int main (void)
{
        int inum;

        inum = 236882887;
//      printf("%d\n", 48 % 1);
        printf("%d %d\n", inum, ft_find_next_prime(inum));
}
