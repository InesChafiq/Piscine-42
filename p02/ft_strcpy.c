/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 16:16:56 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/06 15:45:24 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
