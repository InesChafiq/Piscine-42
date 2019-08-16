/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:03:26 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/12 16:06:17 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i ==0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb ==3)
		return (3);
	if (nb <= 5)
		return (5);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int		 main(void)
{
	printf("%d", ft_find_next_prime(2147483637));
	return (0);
}
