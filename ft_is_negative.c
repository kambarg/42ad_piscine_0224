/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:53:59 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/07 17:54:02 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
	{
		sign = 'N';
		write(1, &sign, 1);
	}
	else
	{
		sign = 'P';
		write(1, &sign, 1);
	}
}
/*
	Now let's test my function
*/

int	main(void)
{
	int	mynum;

	mynum = -39;
	ft_is_negative(mynum);
	return (0);
}
