/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:33:57 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/19 16:04:19 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

int		*ft_range(int min, int max)
{
	int		*tab;
	int		p;

	p = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(*tab) * max - min)))
		return (0);
	while (min < max)
	{
		tab[p] = min;
		min++;
		ft_putstr(tab[p] + '0');
		p++;
	}
	return (tab);
}

int		main(void)
{
	ft_range(5, 9);
	return (0);
}
