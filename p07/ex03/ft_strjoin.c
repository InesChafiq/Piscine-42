/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:33:06 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/19 18:00:48 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putstr(char *dest)
{
	int		i;

	i = -1;
	while (dest[++i])
		write(1, &dest[i], 1);
}

int		ft_length(char *sep, char **strs, int size)
{
	int		i;
	int		c;
	int		j;
	int		t;

	c = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		while (strs[j][i])
		{
			i++;
			c++;
		}
		i = 0;
		j++;
	}
	t = 0;
	while (sep[t])
		t++;
	return (c + (size - 1) * t);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		t;
	int		p;

	i = -1;
	t = -1;
	dest = NULL;
	if (size == 0)
		return (dest);
	if (!(dest = malloc(sizeof(char) * (ft_length(sep, strs, size)) + 1)))
		return (NULL);
	while (strs[++i])
	{
		p = -1;
		while (strs[i][++p])
			dest[++t] = strs[i][p];
		if (i >= size - 1)
			break ;
		p = -1;
		while (sep[++p])
			dest[++t] = sep[p];
	}
	dest[t + 1] = '\0';
	return (dest);
}

int		main(void)
{
	char 	*str[5] =  {"lol", "lil", "lal", "lpl", "lel"};
	putstr(ft_strjoin(5, str, " ... "));
 	return (0);
}
