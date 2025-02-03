/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:01:39 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/15 11:34:37 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
/* int strncmp(const char *s1, const char *s2, size_t n)
 * function lexicographically compares the null-terminated strings s1 and s2
 * not more than n characters. After `\0' characters are not compared. Returns 
 * an integer greater than, equal to, or less than 0, according as the string 
 * s1 is greater than, equal to, or less than the string s2.  The comparison 
 * is done using unsigned characters, so that `\200' is greater than `\0'.*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0' && s2[i] != '\0' && i < n)
		return (-1 * s2[i]);
	else if (s1[i] != '\0' && s2[i] == '\0' && i < n)
		return (s1[i]);
	else
		return (0);
}
/*
int	main(void)
{
	char	string1[] = "abc";
	char	string2[] = "abd";
	int	num = 2;
	int		rez;

	rez = ft_strncmp(string1, string2, num);
	printf("s1: %s\n", string1);
	printf("s2: %s\n", string2);
	printf("ft_strncmp: %d\n", rez);
	printf("strncmp: %d\n", strncmp(string1, string2, num));
}*/
