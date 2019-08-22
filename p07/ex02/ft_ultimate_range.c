/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:25:33 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/19 15:48:54 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		p;
	int		*tab;

	p = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[p] = min;
		min++;
		p++;
	}
	*range = tab;
	return (p);
}

int		main(void)
{
	int		**tab;	
	printf("%d\n", ft_ultimate_range(tab, 5, 9));
	return (0);
}
