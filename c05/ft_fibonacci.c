/*Create a function ft_fibonacci that returns the n-th element of the Fibonacci
sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
sequence starts like this: 0, 1, 1, 2.
Overflows must not be handled, the function return will be undefined.
If the index is less than 0, the function should return -1.*/

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	f_index;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		f_index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (f_index);
}

// index:      0 1 2 3 4 5 6  7  8
// F sequence: 0 1 1 2 3 5 8 13  21 
int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
}