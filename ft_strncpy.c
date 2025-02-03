/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:47:27 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/14 16:36:09 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
/* char *strncpy(char * dst, const char * src, size_t len);
 * copy at most len characters from src into dst. If src is less than len 
 * characters long, the remainder of dst is filled with `\0' characters.  
 * Otherwise, dst is not terminated. The source and destination strings 
 * should not overlap, as the behavior is undefined. Functions returns dst. */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	destination[12] = "";

	ft_strncpy(destination, "I did it!", 3);
	printf ("%s\n", destination);
}*/
