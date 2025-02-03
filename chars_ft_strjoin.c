/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambarb <gkambarb@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:52:44 by gkambarb          #+#    #+#             */
/*   Updated: 2024/02/21 14:03:44 by gkambarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
# include <stdio.h>

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sjoin;
	int		sjoin_len;
	int		i;
	int		j;
	int		k;

	i = 0;
	sjoin_len = 1 + (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		sjoin_len = sjoin_len + ft_strlen(strs[i]);
		i++;
	}
	sjoin = (char *) malloc (sjoin_len * sizeof (char));
	k = 0;
	while (k < sjoin_len - 1)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < ft_strlen(strs[i]))
			{
				sjoin[k] = strs[i][j];
				j++;
				k++;
			}
			j = 0;
			while ((j < ft_strlen(sep)) && (i < (size - 1)))
			{
				sjoin[k] = sep[j];
				j++;
				k++;
			}
			i++;
		}
		sjoin[k] = '\0';
	}
	return (sjoin);
}

int main ()
{
	char	*arr[3];

	arr[0] = "Hello";
	arr[1] = "World";
	arr[2] = "!";
	printf("%s\n", ft_strjoin(3, arr, "#"));
}
