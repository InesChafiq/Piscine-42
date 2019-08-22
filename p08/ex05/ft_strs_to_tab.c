/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:26:44 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/21 13:44:58 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int            i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char            *str;
	int                size;

	size = ft_strlen(src);
	if (!(str = malloc(sizeof(str) * (size + 1))))
		return (NULL);
	return (ft_strcpy(str, src));
}

struct		s_stock_str    *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str        *tab;
	int                i;

	i = 0;
	if (!(tab = (t_stock_str *)malloc(sizeof(*tab) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = ft_strdup(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
