/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:10:45 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/20 20:41:14 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
//	int	*ints;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return(0);
	}
/*
	ints = (int*)malloc(size * sizeof(int));
	if (ints == NULL)
	{
        printf("memory cannot be allocated");
		return(-1);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ints[i] = min + i;
			i++;
		}
		return(size);
	}
ange = &ints;
*/
	*range = (int*)malloc(size * sizeof(int));
	if (*range == NULL)
	{
        printf("memory cannot be allocated");
		return(-1);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			(*range)[i] = min + i;
			i++;
		}
		return(size);
	}
}

int	main(void)
{
	int *my_range;
	int range_size;
	int min_value;
	int max_value;
	int	k;

	min_value = 3;
	max_value = 9;
	range_size = ft_ultimate_range(&my_range, min_value, max_value);
	printf ("%d\n", range_size);
	k = 0;
	while (k <  (max_value - min_value))
	{
		printf("%d ",*(my_range + k));
		k++;
	}
//	free(*ints_range);
}
