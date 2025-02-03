/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:19:59 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/07 17:44:32 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	letter;

	letter = 'a';
	while (letter != 'z')
	{
		write(1, &letter, 1);
		letter = letter + 1;
	}
	write(1, &letter, 1);
}
/*
	Now let's test my function
*/

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
