/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 11:11:39 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/14 14:33:52 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base_t,char *base)
{
	int		size;
	int 	i;
	int sizet;

	sizet = 1;
	i = 0;
	size = 0;
	while (base[size])
	{
		while (base_t[sizet])
		{
			if (base[size] == base_t[size + sizet])
				i++;
			sizet++;
		}
		size++;
	}
	if (*base == 127 || *base == 37 || (*base > 42 && *base < 47) || *base < 32)
		return(-2);
	if (i != 0)
		return (-1);
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		nb;
	unsigned int		size;

	nb = 0;
	size = ft_check_base(base, base);
	if (size > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = nbr * -1;
		}
		else
			nb = nbr;
		if (nb > size - 1)
		{
			ft_putnbr_base(nb / size, base);
		}
		ft_putchar(base[nb % size]);
	}
}

int		main(void)
{
	char base[40] = "0123456789abcdef";
	ft_putnbr_base(38473, base);
	return (0);
}
