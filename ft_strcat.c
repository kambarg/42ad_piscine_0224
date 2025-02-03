/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:43:24 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/15 13:23:27 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
*/
/*char *strcat(char *restrict s1, const char *restrict s2).
 * function appends a copy of the null-terminated string s2 to the end of the 
 * null-terminated string s1, then add a terminating `\0'.  The string s1 
 * must have sufficient space to hold the result. Returns the pointer s1.*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != 0)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest_str[50]="0123456789";
	char	src_str[]="abc";	

	printf("%s\n", dest_str);
	printf("%s\n", src_str);
	ft_strcat(dest_str, src_str);
	printf("ft_strcat: %s\n", dest_str);
}*/
