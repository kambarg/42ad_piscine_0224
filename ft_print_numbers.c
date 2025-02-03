/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:51:14 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/07 17:52:15 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	digit;

	i = 0;
	digit = '0';
	while (i < 10)
	{
		write(1, &digit, 1);
		digit = digit + 1;
		i = i + 1;
	}
}

/*
	Now let's test my function
*/
int	main(void)
{
	ft_print_numbers();
	return (0);
}
