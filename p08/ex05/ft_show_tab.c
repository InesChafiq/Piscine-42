/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:22:11 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/21 17:06:10 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct		s_stock_str		*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putnb(int size)
{
	int nb;

	nb = size;
	if (nb > 9)
		ft_putnb(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnb(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}

int		main(int ac, char **av)
{
	/*
	struct s_stock_str *i;
	char *p[3] = {"hello", "lksd","sdsd"};

	i = ft_strs_to_tab(3, p);
	ft_show_tab(i);
	*/
	ft_show_tab(ft_strs_to_tab(ac, av));	
	return (0);
}
