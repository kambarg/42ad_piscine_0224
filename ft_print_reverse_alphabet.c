/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:48:39 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/07 17:50:12 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	letter;

	letter = 'z';
	while (letter != 'a')
	{
		write(1, &letter, 1);
		letter = letter - 1;
	}
	write(1, &letter, 1);
}
/*
	Now let's test my function
*/

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
