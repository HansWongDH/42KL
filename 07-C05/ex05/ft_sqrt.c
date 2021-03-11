/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:45:33 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/06 19:27:55 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	nbr;
	unsigned int	index;

	nbr = (unsigned)nb;
	if (nb <= 0)
		return (0);
	if (nbr == 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= nbr)
	{
		if (sqrt == nbr)
			return (index);
		index++;
	}
	return (0);
}
