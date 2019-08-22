/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:17:25 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/22 17:45:06 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset(char *str, char *charset, int j)
{
	int		i;
	int		p;
	int		count;

	count = 0;
	p = -1;
	while (str[j++])
	{
		while (charset[++p])
		{
			if (str[j] != charset[p])
				count++;
			else
				return (count);
		}
		p = -1;
	}
	return (0);
}

int		ft_nb_mot(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while
		i++;
	}
	return (i);
}

char 	**ft_split(char *str, char *charset)
{
	int		j;
	char 	**dest;
	int		count;
	int		t;
	int i;

	t = 0;
	j = 0;
	i = 0;
	count = ft_is_charset(str, charset, j);
	while ( i < 2)
	{	
		if (!(dest = malloc(sizeof(char *) * (count +1) * )))
			return (0);
		while (j < count)
		{
			dest[t][j] = str[j + count];
			j++;
		}
		count = ft_is_charset(str, charset, j);
		j = 0;
		t++;
		i++;
	}
	dest[t] = 0;
	return (dest);
}
#include <stdio.h>
int		main(void)
{
	int i;

	i = 0;
	while (ft_split("salut", "au")[i])
	{
		printf("%s\n", ft_split("salut", "au")[i]);
		i++;
	}
	return (0);
}
