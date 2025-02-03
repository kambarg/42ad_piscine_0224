/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:35:57 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/13 17:54:50 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

/* char *strcpy(char * dst, const char * src);
 * copy the string src to dst (including the terminating `\0' character.)
 * The source and destination strings should not overlap, as the behavior is 
 * undefined. Function returns dst.*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*init_dest;

	init_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (init_dest);
}

/*int	main(void)
{
    char	destination[50];

	ft_strcpy(destination, "I did it!");
	printf ("%s\n", destination);
}*/
