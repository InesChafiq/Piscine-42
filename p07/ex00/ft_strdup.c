/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:45:02 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/21 10:45:00 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *c)
{
	int		i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;
	int		p;

	i = 0;
	p = -1;
	while (src[i])
		i++;
	s = (char *)malloc(i + 1);
	while (src[++p])
		s[p] = src[p];
	s[p] = '\0';
	return (s);
}

int		main(void)
{
	ft_putstr(ft_strdup("salut"));
	return (0);
}
