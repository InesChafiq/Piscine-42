/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 11:19:10 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/12 15:41:47 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonaci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return -1;
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	return (ft_fibonnaci(index - 1) + ft_fibonnaci(index - 2 ));
}

int		main(void)
{
	printf("%d", ft_fibonnaci(5));
	return 0;
}
