/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:35:55 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/06 17:43:38 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	r = s1[i] - s2[i];
	return (r);
}
