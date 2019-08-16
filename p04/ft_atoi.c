/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:28:48 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/08 17:04:05 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	int		nb;

	i = 0;
	j = 1;
	nb = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == ' '))
	{
		i++;
	}	
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	nb = nb * j; 
	return (nb);
}

int	main(void)
{
	char c[] = " --+-+15t8g256";

	printf("%d", ft_atoi(c));
	return (0);
}
