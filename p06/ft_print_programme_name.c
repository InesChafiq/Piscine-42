/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_programme_name.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:16:25 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/13 14:54:52 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	int		i;

	i = -1;
	while (c[++i])
		write(1, &c[i], 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	(void)argc;

	ft_putstr(argv[0]);
	return (0);
}
