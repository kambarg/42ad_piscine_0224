/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:52:44 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/21 18:49:23 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// use this fuction only when you are sure that memory allocated for dest is 
// enough to store dest + src 
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sjoin;
	int		sjoin_len;
	int		i;

	if (size == 0)
	{
		sjoin = NULL;
	}
	sjoin_len = 1 + (size - 1) * ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		sjoin_len = sjoin_len + ft_strlen(strs[i]);
		i++;
	}
	sjoin = (char *) malloc (sjoin_len * sizeof (char));
	i = 0;
	while (i < size)
	{
		ft_strcat(sjoin, strs[i]);
		if (i != size - 1)
			ft_strcat(sjoin, sep);
		i++;
	}
	return (sjoin);
}
/*
int	main(void)
{
	char	*arr[4];

	arr[0] = "Hello";
	arr[1] = "Wonderful";
	arr[2] = "World";
	arr[3] = "!";
	printf("%s\n", ft_strjoin(4, arr, "&"));
}*/
