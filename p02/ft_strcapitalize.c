/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 16:47:17 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/05 18:14:07 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_uppercase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
}

void	ft_carac(char *str, int i)
{
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	else if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	ft_uppercase(str);
	while (str[i])
	{
		i++;
		while (str[i])
		{
			ft_carac(str, i);
			i++;
		}
	}
	return (str);
}
