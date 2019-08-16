/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 11:55:40 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/08 10:52:42 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	int					t;
	unsigned int		p;

	i = 0;
	t = -1;
	p = -1;
	while (dest[i])
		i++;
	while (src[++t] && ++p < nb)
		dest[i + t] = src[t];
	dest[i + t] = '\0';
	return (dest);
}
