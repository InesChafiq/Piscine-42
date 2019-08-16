/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:21:38 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/14 16:41:38 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb / i >= i)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return (1);	
}

int 	main(void)
{
	printf("%d",ft_is_prime(25846215));
	return 0;
}
