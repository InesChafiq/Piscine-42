/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 11:22:39 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/08 10:53:22 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		t;

	t = -1;
	i = 0;
	while (dest[i])
		i++;
	while (src[++t])
		dest[i + t] = src[t];
	dest[i + t] = '\0';
	return (dest);
}
