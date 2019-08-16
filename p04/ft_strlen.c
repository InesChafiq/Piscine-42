/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:14:49 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/06 18:26:22 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i]);
	return (i);
}

int main (void)
{
	char	str[40] = "stren";
	printf("%d", ft_strlen(str));
	return (0);
}
