/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:19:37 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/14 13:44:39 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
/* is_printable
 * function that returns 1 if the string given as a parameter contains only
 * printable characters (including space ' '), and 0 if it contains any other 
 * character. It should return 1 if str is empty. */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	int	rezult;

	rezult = ft_str_is_printable("gau");
	printf("is_printable:%d\n", rezult);
}*/
