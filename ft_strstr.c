/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:25 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/15 20:05:20 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (*string != '\0')
	{
		string++;
		i++;
	}
	return (i);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	int	subs_len;
	int	k;
	int	rez;

	k = 0;
	subs_len = ft_strlen(to_find);
	while (str[k] != '\0')
	{
		rez = ft_strncmp(str + k, to_find, subs_len);
		if (rez == 0)
			return (str + k);
		else
			k++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char   string[] ="foobazbar";
	char substring[] = "baz";
	char *fc;

	fc = ft_strstr(string, substring);
	printf("%s\n", string);
	printf("%s\n", substring);
	printf ("%s\n", fc);
}*/
