/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:39:04 by ichafiq           #+#    #+#             */
/*   Updated: 2019/08/12 15:44:57 by ichafiq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;

	i = nb;
	if (power < 0)
		return (0);
	while (--power > 0)
		i = i * nb;
	return (i);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	while (i + 1 < ac)
	{
		printf("%d\n", ft_iterative_power(atoi(av[i]), atoi(av[i + 1])));
		i = i + 2;
	}
	return (0);
}
