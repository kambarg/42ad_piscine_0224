/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:55:21 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/14 19:33:48 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
*/
/* int strcmp(const char *s1, const char *s2)
 * function lexicographically compare the null-terminated strings s1 and s2.
 * return an integer greater than, equal to, or less than 0, according as the 
 * string s1 is greater than, equal to, or less than the string s2. The 
 * comparison is done using unsigned characters, so that `\200' is greater 
 * than `\0'*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1 * s2[i]);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (s1[i]);
	else
		return (0);
}
/*
int	main(void)
{
	char	string1[] = "";
	char	string2[] = "gahyyy";
	int		rez;

	rez = ft_strcmp(string1, string2);
	printf("s1: %s\n", string1);
	printf("s2: %s\n", string2);
	printf("ft_strcmp: %d\n", rez);
	printf("strcmp: %d\n", strcmp(string1, string2));
}*/
